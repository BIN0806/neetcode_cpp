#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {3,1,5,8};
        auto actual = s.maxCoins(a0);
        int expected = 167;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {1,5};
        auto actual = s.maxCoins(a0);
        int expected = 10;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {1};
        auto actual = s.maxCoins(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {0,0};
        auto actual = s.maxCoins(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {7,9,8};
        auto actual = s.maxCoins(a0);
        int expected = 568;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
