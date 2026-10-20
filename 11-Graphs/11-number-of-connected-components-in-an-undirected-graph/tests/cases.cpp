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
        vector<vector<int>> a1 = {{0,1},{1,2},{3,4}};
        auto actual = s.countComponents(a0, a1);
        int expected = 2;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        int a0 = 5;
        vector<vector<int>> a1 = {{0,1},{1,2},{2,3},{3,4}};
        auto actual = s.countComponents(a0, a1);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        int a0 = 4;
        vector<vector<int>> a1 = {};
        auto actual = s.countComponents(a0, a1);
        int expected = 4;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        int a0 = 1;
        vector<vector<int>> a1 = {};
        auto actual = s.countComponents(a0, a1);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        int a0 = 3;
        vector<vector<int>> a1 = {{0,1},{1,2},{0,2}};
        auto actual = s.countComponents(a0, a1);
        int expected = 1;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
