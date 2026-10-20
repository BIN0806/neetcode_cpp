#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        int a0 = 123;
        auto actual = s.reverse(a0);
        int expected = 321;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        int a0 = -123;
        auto actual = s.reverse(a0);
        int expected = -321;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        int a0 = 120;
        auto actual = s.reverse(a0);
        int expected = 21;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        int a0 = 0;
        auto actual = s.reverse(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        int a0 = 1534236469;
        auto actual = s.reverse(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 6", [] {
        Solution s;
        int a0 = INT_MIN;
        auto actual = s.reverse(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 7", [] {
        Solution s;
        int a0 = 1463847412;
        auto actual = s.reverse(a0);
        int expected = 2147483641;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
