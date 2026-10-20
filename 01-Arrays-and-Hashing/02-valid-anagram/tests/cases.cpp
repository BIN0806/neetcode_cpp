#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        string a0 = "anagram";
        string a1 = "nagaram";
        auto actual = s.isAnagram(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        string a0 = "rat";
        string a1 = "car";
        auto actual = s.isAnagram(a0, a1);
        bool expected = false;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        string a0 = "a";
        string a1 = "ab";
        auto actual = s.isAnagram(a0, a1);
        bool expected = false;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        string a0 = "aacc";
        string a1 = "ccac";
        auto actual = s.isAnagram(a0, a1);
        bool expected = false;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        string a0 = "ab";
        string a1 = "ba";
        auto actual = s.isAnagram(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
