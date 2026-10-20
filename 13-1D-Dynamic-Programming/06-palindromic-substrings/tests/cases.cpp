#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        string a0 = "abc";
        auto actual = s.countSubstrings(a0);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        string a0 = "aaa";
        auto actual = s.countSubstrings(a0);
        int expected = 6;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        string a0 = "a";
        auto actual = s.countSubstrings(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        string a0 = "abba";
        auto actual = s.countSubstrings(a0);
        int expected = 6;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        string a0 = "aaaa";
        auto actual = s.countSubstrings(a0);
        int expected = 10;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
