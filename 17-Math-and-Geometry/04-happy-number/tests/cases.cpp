#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        int a0 = 19;
        auto actual = s.isHappy(a0);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        int a0 = 2;
        auto actual = s.isHappy(a0);
        bool expected = false;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        int a0 = 1;
        auto actual = s.isHappy(a0);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        int a0 = 7;
        auto actual = s.isHappy(a0);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        int a0 = 4;
        auto actual = s.isHappy(a0);
        bool expected = false;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
