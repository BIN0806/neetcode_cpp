#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,2,3},{4,5,6},{7,8,9}};
        auto actual = s.spiralOrder(a0);
        vector<int> expected = {1,2,3,6,9,8,7,4,5};
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
        auto actual = s.spiralOrder(a0);
        vector<int> expected = {1,2,3,4,8,12,11,10,9,5,6,7};
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,2,3}};
        auto actual = s.spiralOrder(a0);
        vector<int> expected = {1,2,3};
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<vector<int>> a0 = {{1},{2},{3}};
        auto actual = s.spiralOrder(a0);
        vector<int> expected = {1,2,3};
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<vector<int>> a0 = {{5}};
        auto actual = s.spiralOrder(a0);
        vector<int> expected = {5};
        nc::eq(actual, expected);
    });
    return nc::finish();
}
