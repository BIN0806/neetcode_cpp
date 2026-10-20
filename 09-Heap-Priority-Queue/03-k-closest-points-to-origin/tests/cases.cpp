#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,3},{-2,2}};
        int a1 = 1;
        auto actual = s.kClosest(a0, a1);
        vector<vector<int>> expected = {{-2,2}};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 2", [] {
        Solution s;
        vector<vector<int>> a0 = {{3,3},{5,-1},{-2,4}};
        int a1 = 2;
        auto actual = s.kClosest(a0, a1);
        vector<vector<int>> expected = {{3,3},{-2,4}};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 3", [] {
        Solution s;
        vector<vector<int>> a0 = {{0,0}};
        int a1 = 1;
        auto actual = s.kClosest(a0, a1);
        vector<vector<int>> expected = {{0,0}};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 4", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,2},{3,4}};
        int a1 = 2;
        auto actual = s.kClosest(a0, a1);
        vector<vector<int>> expected = {{1,2},{3,4}};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    return nc::finish();
}
