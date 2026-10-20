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
        vector<int> a1 = {1,2,5};
        auto actual = s.change(a0, a1);
        int expected = 4;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        int a0 = 3;
        vector<int> a1 = {2};
        auto actual = s.change(a0, a1);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        int a0 = 10;
        vector<int> a1 = {10};
        auto actual = s.change(a0, a1);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        int a0 = 0;
        vector<int> a1 = {1,2};
        auto actual = s.change(a0, a1);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        int a0 = 4;
        vector<int> a1 = {1,2,3};
        auto actual = s.change(a0, a1);
        int expected = 4;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
