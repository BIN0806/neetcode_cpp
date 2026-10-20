#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        int a0 = 3;
        int a1 = 7;
        auto actual = s.uniquePaths(a0, a1);
        int expected = 28;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        int a0 = 3;
        int a1 = 2;
        auto actual = s.uniquePaths(a0, a1);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        int a0 = 1;
        int a1 = 1;
        auto actual = s.uniquePaths(a0, a1);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        int a0 = 1;
        int a1 = 10;
        auto actual = s.uniquePaths(a0, a1);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        int a0 = 10;
        int a1 = 10;
        auto actual = s.uniquePaths(a0, a1);
        int expected = 48620;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
