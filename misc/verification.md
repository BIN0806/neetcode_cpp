# Verification

Verified on October 20, 2026 using the local clang++ compiler in C++20 mode.

- All 150 reference implementations passed: 693 test groups, 3,020 assertions.
- All 150 blank starter files compiled against their test adapters.
- Five runner regression checks passed (selection, nested-folder detection, complete catalog, and pass invalidation).
- End-to-end checks confirmed TODO for blank starters, rejection of a wrong implementation, progress credit for a working implementation, invalidation after edits, and no progress changes for reference runs.

The student workspace starts at 0/150; verification of reference answers is not student progress.

Reproduce the complete positive verification with `./test all --reference`. Runner checks: `python3 -m unittest discover -s misc -p test_runner.py -v`.

See `verification.json` for per-problem case and assertion counts. These checks establish that the local harness works with the included answers; they do not reproduce the platforms’ hidden judge tests.

An optional AddressSanitizer experiment stalled during runtime initialization on this host, before executing the tests; it was excluded from the delivered runner. The standard local suite is the verified configuration.

Reorganized into 18 numbered roadmap categories on October 20, 2026. Each category and its problems follow the supplied GitHub repository’s ordering.

After reorganization: all 150 starters compiled, all 150 reference answers passed (693 groups, 3,020 assertions), and all eight runner regression checks passed. Problem-local and category-local test selection were also verified.
