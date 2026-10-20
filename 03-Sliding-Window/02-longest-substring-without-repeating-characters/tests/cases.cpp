#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        string a0 = "abcabcbb";
        auto actual = s.lengthOfLongestSubstring(a0);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        string a0 = "bbbbb";
        auto actual = s.lengthOfLongestSubstring(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        string a0 = "pwwkew";
        auto actual = s.lengthOfLongestSubstring(a0);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        string a0 = "";
        auto actual = s.lengthOfLongestSubstring(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        string a0 = "abba";
        auto actual = s.lengthOfLongestSubstring(a0);
        int expected = 2;
        nc::eq(actual, expected);
    });
    nc::test("case 6", [] {
        Solution s;
        string a0 = " ";
        auto actual = s.lengthOfLongestSubstring(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("seeded differential cases", [] {
        mt19937 rng(3);for(int t=0;t<100;++t){string a;for(unsigned i=0,n=rng()%20;i<n;++i)a+=char('a'+rng()%6);int expected=0;
            for(int i=0;i<int(a.size());++i){set<char> seen;for(int j=i;j<int(a.size());++j){if(!seen.insert(a[j]).second)break;expected=max(expected,j-i+1);}}Solution s;nc::eq(s.lengthOfLongestSubstring(a),expected);}
    });
    return nc::finish();
}
