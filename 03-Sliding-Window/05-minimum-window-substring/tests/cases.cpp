#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        string a0 = "ADOBECODEBANC";
        string a1 = "ABC";
        auto actual = s.minWindow(a0, a1);
        string expected = "BANC";
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        string a0 = "a";
        string a1 = "a";
        auto actual = s.minWindow(a0, a1);
        string expected = "a";
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        string a0 = "a";
        string a1 = "aa";
        auto actual = s.minWindow(a0, a1);
        string expected = "";
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        string a0 = "aa";
        string a1 = "aa";
        auto actual = s.minWindow(a0, a1);
        string expected = "aa";
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        string a0 = "bba";
        string a1 = "ab";
        auto actual = s.minWindow(a0, a1);
        string expected = "ba";
        nc::eq(actual, expected);
    });
    return nc::finish();
}
