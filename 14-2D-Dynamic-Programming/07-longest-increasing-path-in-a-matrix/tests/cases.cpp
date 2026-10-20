#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<vector<int>> a0 = {{9,9,4},{6,6,8},{2,1,1}};
        auto actual = s.longestIncreasingPath(a0);
        int expected = 4;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<vector<int>> a0 = {{3,4,5},{3,2,6},{2,2,1}};
        auto actual = s.longestIncreasingPath(a0);
        int expected = 4;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<vector<int>> a0 = {{1}};
        auto actual = s.longestIncreasingPath(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<vector<int>> a0 = {{7,7},{7,7}};
        auto actual = s.longestIncreasingPath(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,2,3}};
        auto actual = s.longestIncreasingPath(a0);
        int expected = 3;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
