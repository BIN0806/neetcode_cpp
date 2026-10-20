#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<string> a0 = {"eat","tea","tan","ate","nat","bat"};
        auto actual = s.groupAnagrams(a0);
        vector<vector<string>> expected = {{"bat"},{"nat","tan"},{"ate","eat","tea"}};
        nc::eq(nc::groups(actual), nc::groups(expected));
    });
    nc::test("case 2", [] {
        Solution s;
        vector<string> a0 = {""};
        auto actual = s.groupAnagrams(a0);
        vector<vector<string>> expected = {{""}};
        nc::eq(nc::groups(actual), nc::groups(expected));
    });
    nc::test("case 3", [] {
        Solution s;
        vector<string> a0 = {"a"};
        auto actual = s.groupAnagrams(a0);
        vector<vector<string>> expected = {{"a"}};
        nc::eq(nc::groups(actual), nc::groups(expected));
    });
    nc::test("case 4", [] {
        Solution s;
        vector<string> a0 = {"ab","ba","ab","abc"};
        auto actual = s.groupAnagrams(a0);
        vector<vector<string>> expected = {{"ab","ba","ab"},{"abc"}};
        nc::eq(nc::groups(actual), nc::groups(expected));
    });
    return nc::finish();
}
