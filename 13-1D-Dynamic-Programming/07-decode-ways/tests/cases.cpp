#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        string a0 = "12";
        auto actual = s.numDecodings(a0);
        int expected = 2;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        string a0 = "226";
        auto actual = s.numDecodings(a0);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        string a0 = "06";
        auto actual = s.numDecodings(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        string a0 = "10";
        auto actual = s.numDecodings(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        string a0 = "2101";
        auto actual = s.numDecodings(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 6", [] {
        Solution s;
        string a0 = "100";
        auto actual = s.numDecodings(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 7", [] {
        Solution s;
        string a0 = "11106";
        auto actual = s.numDecodings(a0);
        int expected = 2;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
