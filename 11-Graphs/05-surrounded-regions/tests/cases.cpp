#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<vector<char>> a0 = nc::board({"XXXX","XOOX","XXOX","XOXX"});
        s.solve(a0);
        auto actual = a0;
        vector<vector<char>> expected = nc::board({"XXXX","XXXX","XXXX","XOXX"});
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<vector<char>> a0 = nc::board({"X"});
        s.solve(a0);
        auto actual = a0;
        vector<vector<char>> expected = nc::board({"X"});
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<vector<char>> a0 = nc::board({"OO","OO"});
        s.solve(a0);
        auto actual = a0;
        vector<vector<char>> expected = nc::board({"OO","OO"});
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<vector<char>> a0 = nc::board({"XXX","XOX","XXX"});
        s.solve(a0);
        auto actual = a0;
        vector<vector<char>> expected = nc::board({"XXX","XXX","XXX"});
        nc::eq(actual, expected);
    });
    return nc::finish();
}
