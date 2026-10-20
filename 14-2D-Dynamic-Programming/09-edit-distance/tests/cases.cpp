#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        string a0 = "horse";
        string a1 = "ros";
        auto actual = s.minDistance(a0, a1);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        string a0 = "intention";
        string a1 = "execution";
        auto actual = s.minDistance(a0, a1);
        int expected = 5;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        string a0 = "";
        string a1 = "abc";
        auto actual = s.minDistance(a0, a1);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        string a0 = "abc";
        string a1 = "";
        auto actual = s.minDistance(a0, a1);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        string a0 = "same";
        string a1 = "same";
        auto actual = s.minDistance(a0, a1);
        int expected = 0;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
