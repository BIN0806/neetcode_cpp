#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {2,3,6,7};
        int a1 = 7;
        auto actual = s.combinationSum(a0, a1);
        vector<vector<int>> expected = {{2,2,3},{7}};
        nc::eq(nc::groups(actual), nc::groups(expected));
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {2,3,5};
        int a1 = 8;
        auto actual = s.combinationSum(a0, a1);
        vector<vector<int>> expected = {{2,2,2,2},{2,3,3},{3,5}};
        nc::eq(nc::groups(actual), nc::groups(expected));
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {2};
        int a1 = 1;
        auto actual = s.combinationSum(a0, a1);
        vector<vector<int>> expected = {};
        nc::eq(nc::groups(actual), nc::groups(expected));
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {2};
        int a1 = 2;
        auto actual = s.combinationSum(a0, a1);
        vector<vector<int>> expected = {{2}};
        nc::eq(nc::groups(actual), nc::groups(expected));
    });
    return nc::finish();
}
