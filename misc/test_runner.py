"""Regression checks for problem detection and stale progress protection."""
import importlib.util
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

spec = importlib.util.spec_from_file_location('neetcode_runner', Path(__file__).with_name('run.py'))
runner = importlib.util.module_from_spec(spec)
spec.loader.exec_module(runner)


class RunnerTests(unittest.TestCase):
    def test_numeric_ids_are_leetcode_ids(self):
        self.assertEqual(runner.select(runner.catalog(), '1')[0]['title'], 'Two Sum')
        self.assertEqual(runner.select(runner.catalog(), '217')[0]['title'], 'Contains Duplicate')

    def test_detection_works_in_nested_folders_and_for_source_path(self):
        problems = runner.catalog()
        problem = runner.select(problems, '1')[0]
        folder = runner.ROOT / problem['directory']
        for path in [folder, folder / 'tests', folder / 'misc', folder / 'solution.cpp']:
            self.assertEqual(runner.detect(problems, path)['number'], 1)
        with self.assertRaises(ValueError):
            runner.detect(problems, runner.ROOT)

    def test_slugs_and_old_folder_names_still_select_the_same_problem(self):
        for selection in ['two-sum', '03-two-sum', '0001-two-sum']:
            self.assertEqual(runner.select(runner.catalog(), selection)[0]['number'], 1)

    def test_category_directory_auto_detection_and_exact_category_selection(self):
        problems = runner.catalog()
        folder = runner.ROOT / '01-Arrays-and-Hashing'
        with patch.object(runner.Path, 'cwd', return_value=folder):
            selected = runner.select(problems, None)
        self.assertEqual(len(selected), 9)
        self.assertTrue(all(p['category'] == 'Arrays & Hashing' for p in selected))
        graphs = runner.select(problems, None, category='Graphs')
        self.assertEqual(len(graphs), 13)
        self.assertTrue(all(p['category'] == 'Graphs' for p in graphs))

    def test_roadmap_category_and_problem_folder_order(self):
        problems = runner.catalog()
        category_folders = list(dict.fromkeys(p['category_directory'] for p in problems))
        self.assertEqual(len(category_folders), 18)
        self.assertEqual([int(name[:2]) for name in category_folders], list(range(1, 19)))
        for category in category_folders:
            rows = [p for p in problems if p['category_directory'] == category]
            self.assertEqual([int(Path(p['directory']).name[:2]) for p in rows], list(range(1, len(rows) + 1)))
            self.assertEqual([p['category_order'] for p in rows], list(range(1, len(rows) + 1)))
            self.assertTrue((runner.ROOT / category / 'test').exists())

    def test_ambiguous_or_unknown_selections_are_rejected(self):
        with self.assertRaises(ValueError):
            runner.select(runner.catalog(), '999999')
        with self.assertRaises(ValueError):
            runner.select(runner.catalog(), 'linked')

    def test_pass_invalidates_when_code_tests_or_helpers_change(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            folder = root / '0001-example'
            for name, content in [('solution.cpp', 'solution'), ('tests/cases.cpp', 'tests'),
                                  ('misc/reference.hpp', 'reference')]:
                file = folder / name
                file.parent.mkdir(parents=True, exist_ok=True)
                file.write_text(content)
            (root / 'misc/include').mkdir(parents=True)
            header = root / 'misc/include/shared.hpp'
            header.write_text('shared header')
            problem = {'number': 1, 'directory': folder.name}
            with patch.object(runner, 'ROOT', root):
                def successful_state():
                    return {'1': {'status': 'PASS', 'fingerprint': runner.source_digest(problem)}}
                state = successful_state()
                self.assertTrue(runner.passing(problem, state))
                for file in [folder / 'solution.cpp', folder / 'tests/cases.cpp', header]:
                    state = successful_state()
                    file.write_text(file.read_text() + ' edited')
                    self.assertFalse(runner.passing(problem, state))
                state = successful_state()
                (folder / 'helper.hpp').write_text('a new helper')
                self.assertFalse(runner.passing(problem, state))
                state = successful_state()
                (folder / 'misc/reference.hpp').write_text('reference changes do not count as your work')
                self.assertTrue(runner.passing(problem, state))
                self.assertFalse(runner.passing(problem, {'1': {'status': 'TODO', 'fingerprint': runner.source_digest(problem)}}))

    def test_manifest_has_every_starter_test_and_description(self):
        problems = runner.catalog()
        self.assertEqual(len(problems), 150)
        self.assertEqual(len({p['number'] for p in problems}), 150)
        for problem in problems:
            folder = runner.ROOT / problem['directory']
            for name in ['solution.cpp', 'README.md', 'tests/cases.cpp', 'misc/reference.hpp', 'test']:
                self.assertTrue((folder / name).exists(), folder / name)


if __name__ == '__main__':
    unittest.main()
