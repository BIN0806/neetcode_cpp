#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        int a0 = 1;
        auto actual = s.climbStairs(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        int a0 = 2;
        auto actual = s.climbStairs(a0);
        int expected = 2;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        int a0 = 3;
        auto actual = s.climbStairs(a0);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        int a0 = 5;
        auto actual = s.climbStairs(a0);
        int expected = 8;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        int a0 = 45;
        auto actual = s.climbStairs(a0);
        int expected = 1836311903;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
