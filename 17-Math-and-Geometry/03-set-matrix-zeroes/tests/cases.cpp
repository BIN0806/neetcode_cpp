#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,1,1},{1,0,1},{1,1,1}};
        s.setZeroes(a0);
        auto actual = a0;
        vector<vector<int>> expected = {{1,0,1},{0,0,0},{1,0,1}};
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<vector<int>> a0 = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
        s.setZeroes(a0);
        auto actual = a0;
        vector<vector<int>> expected = {{0,0,0,0},{0,4,5,0},{0,3,1,0}};
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,2}};
        s.setZeroes(a0);
        auto actual = a0;
        vector<vector<int>> expected = {{1,2}};
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<vector<int>> a0 = {{0},{1}};
        s.setZeroes(a0);
        auto actual = a0;
        vector<vector<int>> expected = {{0},{0}};
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,0}};
        s.setZeroes(a0);
        auto actual = a0;
        vector<vector<int>> expected = {{0,0}};
        nc::eq(actual, expected);
    });
    return nc::finish();
}
