#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,2,3},{4,5,6},{7,8,9}};
        s.rotate(a0);
        auto actual = a0;
        vector<vector<int>> expected = {{7,4,1},{8,5,2},{9,6,3}};
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,2},{3,4}};
        s.rotate(a0);
        auto actual = a0;
        vector<vector<int>> expected = {{3,1},{4,2}};
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<vector<int>> a0 = {{1}};
        s.rotate(a0);
        auto actual = a0;
        vector<vector<int>> expected = {{1}};
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<vector<int>> a0 = {{-1,0},{2,-3}};
        s.rotate(a0);
        auto actual = a0;
        vector<vector<int>> expected = {{2,-1},{-3,0}};
        nc::eq(actual, expected);
    });
    return nc::finish();
}
