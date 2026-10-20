#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {10,1,2,7,6,1,5};
        int a1 = 8;
        auto actual = s.combinationSum2(a0, a1);
        vector<vector<int>> expected = {{1,1,6},{1,2,5},{1,7},{2,6}};
        nc::eq(nc::groups(actual), nc::groups(expected));
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {2,5,2,1,2};
        int a1 = 5;
        auto actual = s.combinationSum2(a0, a1);
        vector<vector<int>> expected = {{1,2,2},{5}};
        nc::eq(nc::groups(actual), nc::groups(expected));
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {2};
        int a1 = 1;
        auto actual = s.combinationSum2(a0, a1);
        vector<vector<int>> expected = {};
        nc::eq(nc::groups(actual), nc::groups(expected));
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {1,1,1};
        int a1 = 2;
        auto actual = s.combinationSum2(a0, a1);
        vector<vector<int>> expected = {{1,1}};
        nc::eq(nc::groups(actual), nc::groups(expected));
    });
    return nc::finish();
}
