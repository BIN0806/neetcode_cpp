#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        string a0 = "rabbbit";
        string a1 = "rabbit";
        auto actual = s.numDistinct(a0, a1);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        string a0 = "babgbag";
        string a1 = "bag";
        auto actual = s.numDistinct(a0, a1);
        int expected = 5;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        string a0 = "a";
        string a1 = "aa";
        auto actual = s.numDistinct(a0, a1);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        string a0 = "abc";
        string a1 = "abc";
        auto actual = s.numDistinct(a0, a1);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        string a0 = "aaaa";
        string a1 = "aa";
        auto actual = s.numDistinct(a0, a1);
        int expected = 6;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
