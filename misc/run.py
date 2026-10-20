#!/usr/bin/env python3
"""Offline C++ practice runner. Python standard library only."""
from __future__ import annotations

import argparse
from concurrent.futures import ThreadPoolExecutor
import hashlib
import json
import os
from pathlib import Path
import re
import shlex
import shutil
import subprocess
import sys
import tempfile
import time

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = ROOT / 'misc/manifest.json'
PROGRESS = ROOT / 'misc/progress.json'
CACHE = ROOT / 'misc/build'


def catalog():
    return json.loads(MANIFEST.read_text())


def source_digest(problem, reference=False):
    folder = ROOT / problem['directory']
    files = [folder / ('misc/reference.hpp' if reference else 'solution.cpp'),
             folder / 'tests/cases.cpp', *sorted((ROOT / 'misc/include').glob('*.hpp'))]
    # Rebuild and invalidate old passes when a solution's local helper changes.
    excluded = {folder / ('solution.cpp' if reference else 'misc/reference.hpp')}
    extras = sorted(p for p in folder.rglob('*') if p.is_file()
                    and p.suffix in {'.cpp', '.cc', '.h', '.hpp', '.inc'}
                    and p not in files and p not in excluded)
    files.extend(extras)
    digest = hashlib.sha256()
    for file in files:
        digest.update(str(file.relative_to(ROOT)).encode())
        digest.update(b'\0')
        digest.update(file.read_bytes())
    return digest.hexdigest()


def unstarted(problem):
    file = ROOT / problem['directory'] / 'solution.cpp'
    return hashlib.sha256(file.read_bytes()).hexdigest() == problem['starter_sha256']


def load_progress():
    if not PROGRESS.exists():
        return {}
    try:
        state = json.loads(PROGRESS.read_text())
    except (json.JSONDecodeError, OSError) as error:
        raise ValueError(f'Cannot read progress file {PROGRESS}: {error}') from error
    if not isinstance(state, dict):
        raise ValueError(f'Invalid progress file: {PROGRESS}')
    return state


def save_progress(state):
    # Atomic replacement avoids losing a previous result if a run is interrupted.
    fd, name = tempfile.mkstemp(prefix='.progress-', dir=PROGRESS.parent)
    try:
        with os.fdopen(fd, 'w') as handle:
            json.dump(state, handle, indent=2)
            handle.write('\n')
        os.replace(name, PROGRESS)
    finally:
        Path(name).unlink(missing_ok=True)


def passing(problem, state):
    record = state.get(str(problem['number']), {})
    return (record.get('status') == 'PASS'
            and record.get('fingerprint') == source_digest(problem))


def detect(problems, path=None):
    path = Path(path or Path.cwd()).resolve()
    if path.is_file():
        path = path.parent
    for problem in problems:
        folder = ROOT / problem['directory']
        if path == folder or folder in path.parents:
            return problem
    raise ValueError('No problem detected. From neetcode run ./test <LeetCode number>, '
                     'or cd into a problem folder and run ./test.')


def select(problems, selection, category=None):
    if category:
        matches = [p for p in problems if category.casefold() in {p['category'].casefold(), p.get('category_directory', '').casefold()}]
        if not matches:
            matches = [p for p in problems if category.casefold() in p['category'].casefold()]
        if not matches:
            raise ValueError(f'No category matches {category!r}. Run ./test list.')
        if selection and selection != 'all':
            raise ValueError('Use a problem number OR --category, not both.')
        return matches
    if selection == 'all':
        return problems
    if selection is None:
        try:
            return [detect(problems)]
        except ValueError:
            matches = [p for p in problems if Path.cwd().resolve() == ROOT / Path(p['directory']).parent]
            if matches:
                return matches
            raise
    if selection.isdecimal():
        matches = [p for p in problems if p['number'] == int(selection)]
    elif Path(selection).exists():
        return [detect(problems, selection)]
    else:
        key = selection.casefold().rstrip('/')
        matches = [p for p in problems if key in {p['directory'].casefold(),
                   Path(p['directory']).name.casefold(), p.get('slug', '').casefold(),
                   p.get('legacy_directory', '').casefold()}]
        if not matches:
            matches = [p for p in problems if key in p['title'].casefold()]
    if len(matches) != 1:
        raise ValueError(f'Expected one problem for {selection!r}, found {len(matches)}. '
                         'Use its LeetCode number from ./test list.')
    return matches


def compiler_command():
    command = shlex.split(os.environ.get('CXX', 'clang++'))
    if not command or not shutil.which(command[0]):
        raise ValueError('C++ compiler not found. Install clang++ or set CXX to your compiler.')
    return command


def compiler_identity(command):
    result = subprocess.run([*command, '--version'], capture_output=True, text=True, timeout=10)
    if result.returncode:
        raise ValueError('Could not identify the C++ compiler: ' + result.stderr)
    return str(Path(shutil.which(command[0])).resolve()) + '\n' + result.stdout


def execute(problem, args, command, identity, multiple=False):
    result = {'number': problem['number'], 'title': problem['title'], 'status': 'ERROR',
              'output': '', 'cases': 0, 'assertions': 0}
    try:
        fingerprint = source_digest(problem, args.reference)
        result['fingerprint'] = fingerprint
        if multiple and not args.reference and not args.include_unstarted and unstarted(problem):
            result['status'] = 'NOT STARTED'
            return result
        flags = ['-std=c++20', '-O0', '-g', '-Wall', '-Wextra', '-Wno-unused-parameter']
        if args.reference:
            flags.append('-DNEETCODE_REFERENCE')
        key = hashlib.sha256((fingerprint + identity + repr(command + flags)).encode()).hexdigest()
        CACHE.mkdir(exist_ok=True)
        mode = 'reference' if args.reference else 'solution'
        binary = CACHE / f'{problem["number"]}-{mode}-{key[:20]}'
        if not binary.exists():
            fd, name = tempfile.mkstemp(prefix='.compile-', dir=CACHE)
            os.close(fd)
            temporary = Path(name)
            try:
                built = subprocess.run([*command, *flags,
                                        str(ROOT / problem['directory'] / 'tests/cases.cpp'),
                                        '-o', str(temporary)], capture_output=True, text=True, timeout=120)
                if built.returncode:
                    result.update(status='COMPILE ERROR', output=built.stdout + built.stderr)
                    return result
                result['warnings'] = built.stderr
                temporary.chmod(0o755)
                os.replace(temporary, binary)
            finally:
                temporary.unlink(missing_ok=True)
                shutil.rmtree(str(temporary) + '.dSYM', ignore_errors=True)
        if args.compile_only:
            result['status'] = 'COMPILED'
            return result
        env = os.environ.copy()
        ran = subprocess.run([str(binary)], capture_output=True, text=True,
                             timeout=args.timeout, env=env, cwd=ROOT / problem['directory'])
        output = ran.stdout + ran.stderr
        result['output'] = output
        summary = re.search(r'^NC_RESULT cases=(\d+) assertions=(\d+) failed=(\d+) unfinished=(\d+)$',
                            ran.stdout, re.MULTILINE)
        if not summary:
            result['status'] = 'CRASH' if ran.returncode < 0 else 'ERROR'
            if not output:
                result['output'] = f'Exited with code {ran.returncode}, without a test summary.'
            return result
        cases, assertions, failures, unfinished = map(int, summary.groups())
        result.update(cases=cases, assertions=assertions)
        if ran.returncode == 0 and cases == problem['cases'] and assertions > 0 and not failures and not unfinished:
            result['status'] = 'PASS'
        elif ran.returncode == 2 and unfinished and not failures:
            result['status'] = 'TODO'
        else:
            result['status'] = 'FAIL'
        return result
    except subprocess.TimeoutExpired:
        result.update(status='TIMEOUT', output='Compilation or tests exceeded the time limit.')
    except (OSError, ValueError) as error:
        result.update(status='ERROR', output=str(error))
    return result


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__, epilog=(
        'Examples: ./test 1 | ./test (inside a problem folder) | ./test all | '
        './test status | ./test list | ./test --category Trees'))
    parser.add_argument('selection', nargs='?', help='LeetCode number, slug, all, list, or status')
    parser.add_argument('--category', help='test a category, e.g. Trees or "Binary Search"')
    parser.add_argument('--reference', action='store_true', help='test reference answers; never records your progress')
    parser.add_argument('--jobs', type=int, default=min(4, os.cpu_count() or 1), help='parallel builds (default: up to 4)')
    parser.add_argument('--timeout', type=float, default=10, help='test timeout per problem, in seconds')
    parser.add_argument('--include-unstarted', action='store_true', help='also build untouched starters during a batch run')
    parser.add_argument('--compile-only', action='store_true', help='check compilation without recording progress')
    parser.add_argument('--verbose', action='store_true', help='show successful test output and compiler warnings')
    parser.add_argument('--json', action='store_true', help='print results as JSON')
    args = parser.parse_args(argv)
    try:
        if args.jobs < 1 or args.timeout <= 0:
            raise ValueError('--jobs and --timeout must be positive.')
        problems = catalog()
        state = load_progress()
        if args.selection in {'list', 'status'}:
            rows = []
            for p in problems:
                record = state.get(str(p['number']), {})
                status = 'PASS' if passing(p, state) else 'NOT STARTED' if unstarted(p) else (
                    record.get('status', 'UNTESTED') if record.get('fingerprint') == source_digest(p) else 'UNTESTED')
                rows.append(dict(p, status=status))
            if args.json:
                print(json.dumps(rows, indent=2))
            elif args.selection == 'list':
                for p in rows:
                    print(f'{p["number"]:>4}  {p["difficulty"]:<6} {p["title"]:<58} {p["category"]}')
            else:
                for category in dict.fromkeys(p['category'] for p in rows):
                    category_rows = [p for p in rows if p['category'] == category]
                    print(f'{sum(p["status"] == "PASS" for p in category_rows):>2}/{len(category_rows):<2}  {category}')
                print(f'\n{sum(p["status"] == "PASS" for p in rows)}/150 passed local tests for the current code.')
            return 0
        selected = select(problems, args.selection, args.category)
        command = compiler_command()
        identity = compiler_identity(command)
        results = []
        multiple = len(selected) > 1
        if args.reference and not args.json:
            print('Checking reference answers (spoilers); your progress will not change.', flush=True)
        with ThreadPoolExecutor(max_workers=args.jobs) as pool:
            futures = [pool.submit(execute, p, args, command, identity, multiple) for p in selected]
            for future in futures:
                result = future.result()
                results.append(result)
                if not args.json:
                    print(f'{result["status"]:<13} {result["number"]:>4}  {result["title"]}', flush=True)
                    if args.verbose or result['status'] not in {'PASS', 'NOT STARTED', 'COMPILED'}:
                        print(result['output'].rstrip(), flush=True)
                    if args.verbose and result.get('warnings'):
                        print(result['warnings'].rstrip(), flush=True)
        if not args.reference and not args.compile_only:
            for result in results:
                if result['status'] == 'NOT STARTED':
                    continue
                state[str(result['number'])] = {k: result[k] for k in ('status', 'fingerprint', 'cases', 'assertions') if k in result}
                state[str(result['number'])]['checked_at'] = time.strftime('%Y-%m-%dT%H:%M:%SZ', time.gmtime())
            save_progress(state)
        if args.json:
            print(json.dumps(results, indent=2))
        else:
            count = lambda status: sum(r['status'] == status for r in results)
            print(f'\n{count("PASS")} passed, {count("COMPILED")} compiled, {count("NOT STARTED")} not started, '
                  f'{count("TODO")} unfinished, '
                  f'{sum(r["status"] not in {"PASS", "COMPILED", "NOT STARTED", "TODO"} for r in results)} failed.')
            if not args.reference and not args.compile_only:
                print(f'Progress: {sum(passing(p, state) for p in problems)}/150 passed local tests for the current code.')
        if any(r['status'] not in {'PASS', 'COMPILED', 'NOT STARTED', 'TODO'} for r in results):
            return 1
        if any(r['status'] in {'TODO', 'NOT STARTED'} for r in results):
            return 2
        return 0
    except (ValueError, OSError) as error:
        print(f'Error: {error}', file=sys.stderr)
        return 1
    except KeyboardInterrupt:
        print('\nInterrupted.', file=sys.stderr)
        return 130


if __name__ == '__main__':
    sys.exit(main())
