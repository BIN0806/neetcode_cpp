#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        string a0 = "aa";
        string a1 = "a";
        auto actual = s.isMatch(a0, a1);
        bool expected = false;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        string a0 = "aa";
        string a1 = "a*";
        auto actual = s.isMatch(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        string a0 = "ab";
        string a1 = ".*";
        auto actual = s.isMatch(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        string a0 = "aab";
        string a1 = "c*a*b";
        auto actual = s.isMatch(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        string a0 = "mississippi";
        string a1 = "mis*is*p*.";
        auto actual = s.isMatch(a0, a1);
        bool expected = false;
        nc::eq(actual, expected);
    });
    nc::test("case 6", [] {
        Solution s;
        string a0 = "ab";
        string a1 = ".*c";
        auto actual = s.isMatch(a0, a1);
        bool expected = false;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
