#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<vector<int>> a0 = {{0,2},{1,3}};
        auto actual = s.swimInWater(a0);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<vector<int>> a0 = {{0,1,2,3,4},{24,23,22,21,5},{12,13,14,15,16},{11,17,18,19,20},{10,9,8,7,6}};
        auto actual = s.swimInWater(a0);
        int expected = 16;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<vector<int>> a0 = {{0}};
        auto actual = s.swimInWater(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<vector<int>> a0 = {{3,2},{0,1}};
        auto actual = s.swimInWater(a0);
        int expected = 3;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
