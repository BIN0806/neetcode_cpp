#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s; auto b=nc::board({"53..7....","6..195...",".98....6.","8...6...3","4..8.3..1","7...2...6",".6....28.","...419..5","....8..79"}); nc::eq(s.isValidSudoku(b),true);
    });
    nc::test("case 2", [] {
        Solution s; auto b=nc::board(vector<string>(9,string(9,'.'))); nc::eq(s.isValidSudoku(b),true);
    });
    nc::test("case 3", [] {
        Solution s; auto b=nc::board(vector<string>(9,string(9,'.'))); b[0][0]=b[0][8]='1'; nc::eq(s.isValidSudoku(b),false);
    });
    nc::test("case 4", [] {
        Solution s; auto b=nc::board(vector<string>(9,string(9,'.'))); b[0][0]=b[8][0]='2'; nc::eq(s.isValidSudoku(b),false);
    });
    nc::test("case 5", [] {
        Solution s; auto b=nc::board(vector<string>(9,string(9,'.'))); b[0][0]=b[2][2]='3'; nc::eq(s.isValidSudoku(b),false);
    });
    return nc::finish();
}
