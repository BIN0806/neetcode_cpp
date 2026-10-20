#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,3},{6,9}};
        vector<int> a1 = {2,5};
        auto actual = s.insert(a0, a1);
        vector<vector<int>> expected = {{1,5},{6,9}};
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,2},{3,5},{6,7},{8,10},{12,16}};
        vector<int> a1 = {4,8};
        auto actual = s.insert(a0, a1);
        vector<vector<int>> expected = {{1,2},{3,10},{12,16}};
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<vector<int>> a0 = {};
        vector<int> a1 = {5,7};
        auto actual = s.insert(a0, a1);
        vector<vector<int>> expected = {{5,7}};
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,5}};
        vector<int> a1 = {2,3};
        auto actual = s.insert(a0, a1);
        vector<vector<int>> expected = {{1,5}};
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<vector<int>> a0 = {{3,5}};
        vector<int> a1 = {1,2};
        auto actual = s.insert(a0, a1);
        vector<vector<int>> expected = {{1,2},{3,5}};
        nc::eq(actual, expected);
    });
    return nc::finish();
}
