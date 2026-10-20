#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<vector<char>> a0 = nc::board({"ABCE","SFCS","ADEE"});
        string a1 = "ABCCED";
        auto actual = s.exist(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<vector<char>> a0 = nc::board({"ABCE","SFCS","ADEE"});
        string a1 = "SEE";
        auto actual = s.exist(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<vector<char>> a0 = nc::board({"ABCE","SFCS","ADEE"});
        string a1 = "ABCB";
        auto actual = s.exist(a0, a1);
        bool expected = false;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<vector<char>> a0 = nc::board({"a"});
        string a1 = "a";
        auto actual = s.exist(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<vector<char>> a0 = nc::board({"a"});
        string a1 = "aa";
        auto actual = s.exist(a0, a1);
        bool expected = false;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
