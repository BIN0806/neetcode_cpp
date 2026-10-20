#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<vector<char>> a0 = nc::board({"11110","11010","11000","00000"});
        auto actual = s.numIslands(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<vector<char>> a0 = nc::board({"11000","11000","00100","00011"});
        auto actual = s.numIslands(a0);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<vector<char>> a0 = nc::board({"0"});
        auto actual = s.numIslands(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<vector<char>> a0 = nc::board({"1"});
        auto actual = s.numIslands(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<vector<char>> a0 = nc::board({"10","01"});
        auto actual = s.numIslands(a0);
        int expected = 2;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
