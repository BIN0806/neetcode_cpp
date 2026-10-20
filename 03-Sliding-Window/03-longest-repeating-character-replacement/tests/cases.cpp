#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        string a0 = "ABAB";
        int a1 = 2;
        auto actual = s.characterReplacement(a0, a1);
        int expected = 4;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        string a0 = "AABABBA";
        int a1 = 1;
        auto actual = s.characterReplacement(a0, a1);
        int expected = 4;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        string a0 = "ABCDE";
        int a1 = 0;
        auto actual = s.characterReplacement(a0, a1);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        string a0 = "AAAA";
        int a1 = 0;
        auto actual = s.characterReplacement(a0, a1);
        int expected = 4;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        string a0 = "ABBB";
        int a1 = 2;
        auto actual = s.characterReplacement(a0, a1);
        int expected = 4;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
