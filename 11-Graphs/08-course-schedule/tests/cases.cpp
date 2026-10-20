#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        int a0 = 2;
        vector<vector<int>> a1 = {{1,0}};
        auto actual = s.canFinish(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        int a0 = 2;
        vector<vector<int>> a1 = {{1,0},{0,1}};
        auto actual = s.canFinish(a0, a1);
        bool expected = false;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        int a0 = 3;
        vector<vector<int>> a1 = {};
        auto actual = s.canFinish(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        int a0 = 4;
        vector<vector<int>> a1 = {{1,0},{2,1},{3,2}};
        auto actual = s.canFinish(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        int a0 = 3;
        vector<vector<int>> a1 = {{1,0},{0,1},{2,1}};
        auto actual = s.canFinish(a0, a1);
        bool expected = false;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
