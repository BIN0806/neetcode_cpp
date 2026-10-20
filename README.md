# NeetCode 150 — local C++ practice

All 150 problems from the official NeetCode repository's `neetcode150` list,
with problem descriptions, blank C++ starters, and independent offline tests.
No package installation or network access is needed to practice.

```sh
git clone https://github.com/BIN0806/neetcode_cpp.git
cd neetcode_cpp
./test list
```

## Start a problem

From the `neetcode` folder, run a test by its **LeetCode problem number**:

```sh
./test 1
```

Or enter a problem folder, edit `solution.cpp`, and run its local script:

```sh
cd 01-Arrays-and-Hashing/03-two-sum
nvim solution.cpp
./test
```

Category folders and their problem folders follow roadmap order, matching the GitHub layout.
The number passed to `./test` is the LeetCode ID, not the folder prefix. For example,
`1` is Two Sum and `217` is Contains Duplicate. `./test list` lists every ID.
Slugs also work: `./test contains-duplicate`.

Each problem folder contains:

```text
01-Arrays-and-Hashing/03-two-sum/
├── README.md               # Problem, examples, constraints
├── solution.cpp            # Your starter: implement this
├── test -> ../../misc/run.py   # Run ./test from this folder
├── tests/
│   └── cases.cpp           # Local tests; add your own cases here
└── misc/
    ├── reference.hpp       # Reference answer — spoilers
    └── source.json         # Source links and attribution
```

The folder is called `tests/` so the executable script can be called `test`.
Use **`./test`**, including the `./`: bare `test` is a shell built-in command.
Inside a problem's `tests/` or `misc/` folder, `../test` also detects that problem.
You can invoke the root script by its absolute path from any problem subfolder;
it detects the problem from the current working directory.

## Roadmap categories

| Category folder | Problems |
|---|---|
| [01-Arrays-and-Hashing](01-Arrays-and-Hashing/README.md) | 9 |
| [02-Two-Pointers](02-Two-Pointers/README.md) | 5 |
| [03-Sliding-Window](03-Sliding-Window/README.md) | 6 |
| [04-Stack](04-Stack/README.md) | 7 |
| [05-Binary-Search](05-Binary-Search/README.md) | 7 |
| [06-Linked-List](06-Linked-List/README.md) | 11 |
| [07-Trees](07-Trees/README.md) | 15 |
| [08-Tries](08-Tries/README.md) | 3 |
| [09-Heap-Priority-Queue](09-Heap-Priority-Queue/README.md) | 7 |
| [10-Backtracking](10-Backtracking/README.md) | 9 |
| [11-Graphs](11-Graphs/README.md) | 13 |
| [12-Advanced-Graphs](12-Advanced-Graphs/README.md) | 6 |
| [13-1D-Dynamic-Programming](13-1D-Dynamic-Programming/README.md) | 12 |
| [14-2D-Dynamic-Programming](14-2D-Dynamic-Programming/README.md) | 11 |
| [15-Greedy](15-Greedy/README.md) | 8 |
| [16-Intervals](16-Intervals/README.md) | 6 |
| [17-Math-and-Geometry](17-Math-and-Geometry/README.md) | 8 |
| [18-Bit-Manipulation](18-Bit-Manipulation/README.md) | 7 |

Each category has a README linking its problems in study order.
Run `./test` inside a category folder to test its started problems.

## Useful commands

Run these from the `neetcode` folder:

```sh
./test list                        # IDs, titles, difficulty, categories
./test status                      # Progress for the current code
./test 1                           # One problem
./test all                         # Test every problem you have started
./test --category Trees            # Test started problems in a category
./test 1 --reference               # Check the bundled answer; no progress credit
./test all --reference             # Verify the complete local suite
```

Inside any problem folder, use `./test` or `./test --reference` without an ID.
A test compiles your `solution.cpp`
automatically. You don't write a `main()` function.

Output shows `PASS`, `FAIL`, `COMPILE ERROR`, `CRASH`, `TIMEOUT`, or `TODO`.
The first build takes longer; unchanged builds are cached.
Use `--verbose` for successful test details and compiler warnings.
Tests time out after 10 seconds per problem; change this with `--timeout 30`.
Builds run on up to four threads; change this with `--jobs 2`.

## Starters and progress

Starters contain the method signatures, the node types an online judge normally
provides, and a `throw nc::NotImplemented()` placeholder. Replace the placeholder
with your implementation. You can add private helpers or data members normally.
The shared header includes standard C++ headers and `using namespace std`.

A problem is counted as passed only after **your implementation** passes all its
local tests. An unchanged starter is skipped by `./test all`; running it directly
shows `TODO`. `--reference` checks the separate answer and never changes progress.
Editing a solution, a test, or a local helper invalidates its previous pass until
you test it again. Results are stored in `misc/progress.json`.

`./test all` exits with code 2 while any problems are unstarted or unfinished,
code 1 if a test/build fails, and code 0 when every selected problem passes.
`./test status` summarizes progress across all 150.

## What the tests cover

The bundle contains 693 named test groups covering all 150 problems. They include
examples, small boundary cases, design-class operation sequences, and seeded
randomized checks against simple brute-force algorithms for 15 problems.
Tests handle unordered results and multiple valid outputs where appropriate.
Tests for linked lists, trees, and graph cloning check structure as well as values.

These are independent local tests, **not NeetCode's or LeetCode's private judge
suite**. Passing them does not prove correctness for every input or optimal time
and space complexity. Use the website's judge when you want its acceptance result.
Add counterexamples to `tests/cases.cpp` as you find them.

The two codec problems use round-trip checks so you may choose your own encoding
format. The included C++ APIs follow the official repository's LeetCode-style
signatures; some NeetCode website method names differ. Meeting Rooms uses
`vector<vector<int>>` intervals.

The harness checks results and structure, not memory leaks. Judge-style node
inputs and several reference answers retain allocations until the process exits.

## Requirements and storage

- A compiler supporting C++20 (`clang++` is recommended).
- Python 3.10 or newer for the standard-library-only runner.

To choose another compiler: `CXX=g++ ./test 1`.
Shared support files, the catalog, build cache, and progress stay under `misc/`.
You can remove `misc/build/` to reclaim compiled-program space without losing
your solutions or progress; the next test rebuilds what it needs.

Source attribution, snapshot hashes, licenses, and verification notes are in
[SOURCES.md](SOURCES.md) and [misc/verification.md](misc/verification.md).

## Sources and credits

This practice template builds on the following projects:

- **[NeetCode / neetcode-gh](https://github.com/neetcode-gh/leetcode)** — the NeetCode 150 catalog and 140 C++ reference implementations. [MIT license](misc/NEETCODE-LICENSE.txt).
- **[Baadal / baadaldev](https://github.com/baadaldev/neetcode-150-cpp)** — the category layout and ten C++ reference implementations. [MIT license](misc/BAADALDEV-LICENSE.txt).
- **[richard7ao](https://github.com/richard7ao/neetcode-150)** — offline problem descriptions, adapted to remove solutions and add local practice instructions. [Apache 2.0 license](misc/APACHE-2.0.txt) and [original notice](misc/DESCRIPTIONS-LICENSE.txt).

The local test harness, test cases, starter files, and runner were created for this
template. This is an independent practice workspace and is not affiliated with
NeetCode or LeetCode. The tests are not their private judge suites.

See [SOURCES.md](SOURCES.md) for exact source details, adaptations, snapshot
hashes, and the per-problem attribution files. Upstream copyright notices and
license files are retained.
