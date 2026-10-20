#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<vector<int>> a0 = {{2,1,1},{2,3,1},{3,4,1}};
        int a1 = 4;
        int a2 = 2;
        auto actual = s.networkDelayTime(a0, a1, a2);
        int expected = 2;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,2,1}};
        int a1 = 2;
        int a2 = 1;
        auto actual = s.networkDelayTime(a0, a1, a2);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,2,1}};
        int a1 = 2;
        int a2 = 2;
        auto actual = s.networkDelayTime(a0, a1, a2);
        int expected = -1;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,2,5},{1,3,1},{3,2,1}};
        int a1 = 3;
        int a2 = 1;
        auto actual = s.networkDelayTime(a0, a1, a2);
        int expected = 2;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
