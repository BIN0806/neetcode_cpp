#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {1,2,3};
        auto actual = s.plusOne(a0);
        vector<int> expected = {1,2,4};
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {4,3,2,1};
        auto actual = s.plusOne(a0);
        vector<int> expected = {4,3,2,2};
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {9};
        auto actual = s.plusOne(a0);
        vector<int> expected = {1,0};
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {9,9,9};
        auto actual = s.plusOne(a0);
        vector<int> expected = {1,0,0,0};
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {0};
        auto actual = s.plusOne(a0);
        vector<int> expected = {1};
        nc::eq(actual, expected);
    });
    return nc::finish();
}
