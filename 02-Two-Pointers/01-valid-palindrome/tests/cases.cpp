#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        string a0 = "A man, a plan, a canal: Panama";
        auto actual = s.isPalindrome(a0);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        string a0 = "race a car";
        auto actual = s.isPalindrome(a0);
        bool expected = false;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        string a0 = " ";
        auto actual = s.isPalindrome(a0);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        string a0 = "0P";
        auto actual = s.isPalindrome(a0);
        bool expected = false;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        string a0 = ".,";
        auto actual = s.isPalindrome(a0);
        bool expected = true;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
