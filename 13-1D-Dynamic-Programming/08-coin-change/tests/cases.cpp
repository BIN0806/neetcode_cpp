#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {1,2,5};
        int a1 = 11;
        auto actual = s.coinChange(a0, a1);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {2};
        int a1 = 3;
        auto actual = s.coinChange(a0, a1);
        int expected = -1;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {1};
        int a1 = 0;
        auto actual = s.coinChange(a0, a1);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {2,5,10,1};
        int a1 = 27;
        auto actual = s.coinChange(a0, a1);
        int expected = 4;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {186,419,83,408};
        int a1 = 6249;
        auto actual = s.coinChange(a0, a1);
        int expected = 20;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
