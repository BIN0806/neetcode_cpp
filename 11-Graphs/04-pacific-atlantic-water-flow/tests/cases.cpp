#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,2,2,3,5},{3,2,3,4,4},{2,4,5,3,1},{6,7,1,4,5},{5,1,1,2,4}};
        auto actual = s.pacificAtlantic(a0);
        vector<vector<int>> expected = {{0,4},{1,3},{1,4},{2,2},{3,0},{3,1},{4,0}};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 2", [] {
        Solution s;
        vector<vector<int>> a0 = {{1}};
        auto actual = s.pacificAtlantic(a0);
        vector<vector<int>> expected = {{0,0}};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 3", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,1},{1,1}};
        auto actual = s.pacificAtlantic(a0);
        vector<vector<int>> expected = {{0,0},{0,1},{1,0},{1,1}};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 4", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,2,3}};
        auto actual = s.pacificAtlantic(a0);
        vector<vector<int>> expected = {{0,0},{0,1},{0,2}};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    return nc::finish();
}
