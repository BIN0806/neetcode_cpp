#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        string a0 = "aab";
        auto actual = s.partition(a0);
        vector<vector<string>> expected = {{"a","a","b"},{"aa","b"}};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 2", [] {
        Solution s;
        string a0 = "a";
        auto actual = s.partition(a0);
        vector<vector<string>> expected = {{"a"}};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 3", [] {
        Solution s;
        string a0 = "aba";
        auto actual = s.partition(a0);
        vector<vector<string>> expected = {{"a","b","a"},{"aba"}};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 4", [] {
        Solution s;
        string a0 = "abc";
        auto actual = s.partition(a0);
        vector<vector<string>> expected = {{"a","b","c"}};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    return nc::finish();
}
