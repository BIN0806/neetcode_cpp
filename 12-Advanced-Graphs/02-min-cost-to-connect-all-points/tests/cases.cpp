#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<vector<int>> a0 = {{0,0},{2,2},{3,10},{5,2},{7,0}};
        auto actual = s.minCostConnectPoints(a0);
        int expected = 20;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<vector<int>> a0 = {{3,12},{-2,5},{-4,1}};
        auto actual = s.minCostConnectPoints(a0);
        int expected = 18;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<vector<int>> a0 = {{0,0}};
        auto actual = s.minCostConnectPoints(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<vector<int>> a0 = {{-1,-1},{1,1}};
        auto actual = s.minCostConnectPoints(a0);
        int expected = 4;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
