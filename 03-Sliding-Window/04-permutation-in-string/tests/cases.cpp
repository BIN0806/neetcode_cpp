#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        string a0 = "ab";
        string a1 = "eidbaooo";
        auto actual = s.checkInclusion(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        string a0 = "ab";
        string a1 = "eidboaoo";
        auto actual = s.checkInclusion(a0, a1);
        bool expected = false;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        string a0 = "adc";
        string a1 = "dcda";
        auto actual = s.checkInclusion(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        string a0 = "abcd";
        string a1 = "abc";
        auto actual = s.checkInclusion(a0, a1);
        bool expected = false;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        string a0 = "a";
        string a1 = "a";
        auto actual = s.checkInclusion(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
