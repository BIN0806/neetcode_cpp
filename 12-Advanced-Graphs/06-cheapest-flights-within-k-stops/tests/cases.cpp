#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        int a0 = 4;
        vector<vector<int>> a1 = {{0,1,100},{1,2,100},{2,0,100},{1,3,600},{2,3,200}};
        int a2 = 0;
        int a3 = 3;
        int a4 = 1;
        auto actual = s.findCheapestPrice(a0, a1, a2, a3, a4);
        int expected = 700;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        int a0 = 3;
        vector<vector<int>> a1 = {{0,1,100},{1,2,100},{0,2,500}};
        int a2 = 0;
        int a3 = 2;
        int a4 = 1;
        auto actual = s.findCheapestPrice(a0, a1, a2, a3, a4);
        int expected = 200;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        int a0 = 3;
        vector<vector<int>> a1 = {{0,1,100},{1,2,100},{0,2,500}};
        int a2 = 0;
        int a3 = 2;
        int a4 = 0;
        auto actual = s.findCheapestPrice(a0, a1, a2, a3, a4);
        int expected = 500;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        int a0 = 3;
        vector<vector<int>> a1 = {{0,1,5}};
        int a2 = 0;
        int a3 = 2;
        int a4 = 2;
        auto actual = s.findCheapestPrice(a0, a1, a2, a3, a4);
        int expected = -1;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        int a0 = 4;
        vector<vector<int>> a1 = {{0,1,1},{1,2,1},{2,3,1},{0,2,10}};
        int a2 = 0;
        int a3 = 3;
        int a4 = 1;
        auto actual = s.findCheapestPrice(a0, a1, a2, a3, a4);
        int expected = 11;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
