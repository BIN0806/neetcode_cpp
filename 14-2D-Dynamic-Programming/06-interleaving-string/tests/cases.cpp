#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        string a0 = "aabcc";
        string a1 = "dbbca";
        string a2 = "aadbbcbcac";
        auto actual = s.isInterleave(a0, a1, a2);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        string a0 = "aabcc";
        string a1 = "dbbca";
        string a2 = "aadbbbaccc";
        auto actual = s.isInterleave(a0, a1, a2);
        bool expected = false;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        string a0 = "";
        string a1 = "";
        string a2 = "";
        auto actual = s.isInterleave(a0, a1, a2);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        string a0 = "a";
        string a1 = "";
        string a2 = "a";
        auto actual = s.isInterleave(a0, a1, a2);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        string a0 = "a";
        string a1 = "b";
        string a2 = "a";
        auto actual = s.isInterleave(a0, a1, a2);
        bool expected = false;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
