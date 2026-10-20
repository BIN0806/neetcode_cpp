#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<vector<int>> a0 = {{INT_MAX,-1,0,INT_MAX},{INT_MAX,INT_MAX,INT_MAX,-1},{INT_MAX,-1,INT_MAX,-1},{0,-1,INT_MAX,INT_MAX}};
        s.wallsAndGates(a0);
        auto actual = a0;
        vector<vector<int>> expected = {{3,-1,0,1},{2,2,1,-1},{1,-1,2,-1},{0,-1,3,4}};
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<vector<int>> a0 = {{INT_MAX}};
        s.wallsAndGates(a0);
        auto actual = a0;
        vector<vector<int>> expected = {{INT_MAX}};
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<vector<int>> a0 = {{0}};
        s.wallsAndGates(a0);
        auto actual = a0;
        vector<vector<int>> expected = {{0}};
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<vector<int>> a0 = {{0,-1,INT_MAX}};
        s.wallsAndGates(a0);
        auto actual = a0;
        vector<vector<int>> expected = {{0,-1,INT_MAX}};
        nc::eq(actual, expected);
    });
    return nc::finish();
}
