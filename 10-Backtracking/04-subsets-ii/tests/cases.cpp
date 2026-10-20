#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {1,2,2};
        auto actual = s.subsetsWithDup(a0);
        vector<vector<int>> expected = {{},{1},{2},{1,2},{2,2},{1,2,2}};
        nc::eq(nc::groups(actual), nc::groups(expected));
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {0};
        auto actual = s.subsetsWithDup(a0);
        vector<vector<int>> expected = {{},{0}};
        nc::eq(nc::groups(actual), nc::groups(expected));
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {2,2,2};
        auto actual = s.subsetsWithDup(a0);
        vector<vector<int>> expected = {{},{2},{2,2},{2,2,2}};
        nc::eq(nc::groups(actual), nc::groups(expected));
    });
    return nc::finish();
}
