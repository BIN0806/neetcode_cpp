#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,2},{1,3},{2,3}};
        auto actual = s.findRedundantConnection(a0);
        vector<int> expected = {2,3};
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,2},{2,3},{3,4},{1,4},{1,5}};
        auto actual = s.findRedundantConnection(a0);
        vector<int> expected = {1,4};
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,2},{2,3},{3,1}};
        auto actual = s.findRedundantConnection(a0);
        vector<int> expected = {3,1};
        nc::eq(actual, expected);
    });
    return nc::finish();
}
