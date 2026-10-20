#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        string a0 = "2";
        string a1 = "3";
        auto actual = s.multiply(a0, a1);
        string expected = "6";
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        string a0 = "123";
        string a1 = "456";
        auto actual = s.multiply(a0, a1);
        string expected = "56088";
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        string a0 = "0";
        string a1 = "123";
        auto actual = s.multiply(a0, a1);
        string expected = "0";
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        string a0 = "99";
        string a1 = "99";
        auto actual = s.multiply(a0, a1);
        string expected = "9801";
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        string a0 = "1";
        string a1 = "100000000000000000000";
        auto actual = s.multiply(a0, a1);
        string expected = "100000000000000000000";
        nc::eq(actual, expected);
    });
    return nc::finish();
}
