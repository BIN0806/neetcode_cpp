#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        string a0 = "leetcode";
        vector<string> a1 = {"leet","code"};
        auto actual = s.wordBreak(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        string a0 = "applepenapple";
        vector<string> a1 = {"apple","pen"};
        auto actual = s.wordBreak(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        string a0 = "catsandog";
        vector<string> a1 = {"cats","dog","sand","and","cat"};
        auto actual = s.wordBreak(a0, a1);
        bool expected = false;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        string a0 = "aaaaaaa";
        vector<string> a1 = {"aaaa","aaa"};
        auto actual = s.wordBreak(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        string a0 = "a";
        vector<string> a1 = {"b"};
        auto actual = s.wordBreak(a0, a1);
        bool expected = false;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
