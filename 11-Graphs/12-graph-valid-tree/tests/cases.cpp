#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        int a0 = 5;
        vector<vector<int>> a1 = {{0,1},{0,2},{0,3},{1,4}};
        auto actual = s.validTree(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        int a0 = 5;
        vector<vector<int>> a1 = {{0,1},{1,2},{2,3},{1,3},{1,4}};
        auto actual = s.validTree(a0, a1);
        bool expected = false;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        int a0 = 1;
        vector<vector<int>> a1 = {};
        auto actual = s.validTree(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        int a0 = 4;
        vector<vector<int>> a1 = {{0,1},{2,3}};
        auto actual = s.validTree(a0, a1);
        bool expected = false;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        int a0 = 3;
        vector<vector<int>> a1 = {{0,1},{1,2},{2,0}};
        auto actual = s.validTree(a0, a1);
        bool expected = false;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
