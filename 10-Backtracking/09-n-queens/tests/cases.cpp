#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s; int n=1; auto boards=s.solveNQueens(n); nc::eq(boards.size(),size_t(1));
            nc::eq(set<vector<string>>(boards.begin(),boards.end()).size(),boards.size());
            for(auto& b:boards){nc::eq(b.size(),size_t(n)); set<int> cols,d1,d2;
            for(int r=0;r<n;++r){nc::eq(b[r].size(),size_t(n)); nc::eq(std::count(b[r].begin(),b[r].end(),'Q'),1); nc::check(b[r].find_first_not_of(".Q")==string::npos); int c=int(b[r].find('Q')); nc::check(cols.insert(c).second && d1.insert(r-c).second && d2.insert(r+c).second,"queens attack each other");}}
    });
    nc::test("case 2", [] {
        Solution s; int n=2; auto boards=s.solveNQueens(n); nc::eq(boards.size(),size_t(0));
            nc::eq(set<vector<string>>(boards.begin(),boards.end()).size(),boards.size());
            for(auto& b:boards){nc::eq(b.size(),size_t(n)); set<int> cols,d1,d2;
            for(int r=0;r<n;++r){nc::eq(b[r].size(),size_t(n)); nc::eq(std::count(b[r].begin(),b[r].end(),'Q'),1); nc::check(b[r].find_first_not_of(".Q")==string::npos); int c=int(b[r].find('Q')); nc::check(cols.insert(c).second && d1.insert(r-c).second && d2.insert(r+c).second,"queens attack each other");}}
    });
    nc::test("case 3", [] {
        Solution s; int n=3; auto boards=s.solveNQueens(n); nc::eq(boards.size(),size_t(0));
            nc::eq(set<vector<string>>(boards.begin(),boards.end()).size(),boards.size());
            for(auto& b:boards){nc::eq(b.size(),size_t(n)); set<int> cols,d1,d2;
            for(int r=0;r<n;++r){nc::eq(b[r].size(),size_t(n)); nc::eq(std::count(b[r].begin(),b[r].end(),'Q'),1); nc::check(b[r].find_first_not_of(".Q")==string::npos); int c=int(b[r].find('Q')); nc::check(cols.insert(c).second && d1.insert(r-c).second && d2.insert(r+c).second,"queens attack each other");}}
    });
    nc::test("case 4", [] {
        Solution s; int n=4; auto boards=s.solveNQueens(n); nc::eq(boards.size(),size_t(2));
            nc::eq(set<vector<string>>(boards.begin(),boards.end()).size(),boards.size());
            for(auto& b:boards){nc::eq(b.size(),size_t(n)); set<int> cols,d1,d2;
            for(int r=0;r<n;++r){nc::eq(b[r].size(),size_t(n)); nc::eq(std::count(b[r].begin(),b[r].end(),'Q'),1); nc::check(b[r].find_first_not_of(".Q")==string::npos); int c=int(b[r].find('Q')); nc::check(cols.insert(c).second && d1.insert(r-c).second && d2.insert(r+c).second,"queens attack each other");}}
    });
    nc::test("case 5", [] {
        Solution s; int n=5; auto boards=s.solveNQueens(n); nc::eq(boards.size(),size_t(10));
            nc::eq(set<vector<string>>(boards.begin(),boards.end()).size(),boards.size());
            for(auto& b:boards){nc::eq(b.size(),size_t(n)); set<int> cols,d1,d2;
            for(int r=0;r<n;++r){nc::eq(b[r].size(),size_t(n)); nc::eq(std::count(b[r].begin(),b[r].end(),'Q'),1); nc::check(b[r].find_first_not_of(".Q")==string::npos); int c=int(b[r].find('Q')); nc::check(cols.insert(c).second && d1.insert(r-c).second && d2.insert(r+c).second,"queens attack each other");}}
    });
    return nc::finish();
}
