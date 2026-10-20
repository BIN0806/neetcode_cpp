#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {1,2,3};
        auto actual = s.permute(a0);
        vector<vector<int>> expected = {{1,2,3},{1,3,2},{2,1,3},{2,3,1},{3,1,2},{3,2,1}};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {0,1};
        auto actual = s.permute(a0);
        vector<vector<int>> expected = {{0,1},{1,0}};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {1};
        auto actual = s.permute(a0);
        vector<vector<int>> expected = {{1}};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    return nc::finish();
}
