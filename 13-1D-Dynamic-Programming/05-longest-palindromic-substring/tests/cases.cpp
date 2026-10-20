#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s; string input="babad"; auto actual=s.longestPalindrome(input); nc::eq(actual.size(),size_t(3)); nc::check(input.find(actual)!=string::npos); nc::eq(actual,string(actual.rbegin(),actual.rend()));
    });
    nc::test("case 2", [] {
        Solution s; string input="cbbd"; auto actual=s.longestPalindrome(input); nc::eq(actual.size(),size_t(2)); nc::check(input.find(actual)!=string::npos); nc::eq(actual,string(actual.rbegin(),actual.rend()));
    });
    nc::test("case 3", [] {
        Solution s; string input="a"; auto actual=s.longestPalindrome(input); nc::eq(actual.size(),size_t(1)); nc::check(input.find(actual)!=string::npos); nc::eq(actual,string(actual.rbegin(),actual.rend()));
    });
    nc::test("case 4", [] {
        Solution s; string input="ac"; auto actual=s.longestPalindrome(input); nc::eq(actual.size(),size_t(1)); nc::check(input.find(actual)!=string::npos); nc::eq(actual,string(actual.rbegin(),actual.rend()));
    });
    nc::test("case 5", [] {
        Solution s; string input="aaaa"; auto actual=s.longestPalindrome(input); nc::eq(actual.size(),size_t(4)); nc::check(input.find(actual)!=string::npos); nc::eq(actual,string(actual.rbegin(),actual.rend()));
    });
    nc::test("case 6", [] {
        Solution s; string input="forgeeksskeegfor"; auto actual=s.longestPalindrome(input); nc::eq(actual.size(),size_t(10)); nc::check(input.find(actual)!=string::npos); nc::eq(actual,string(actual.rbegin(),actual.rend()));
    });
    return nc::finish();
}
