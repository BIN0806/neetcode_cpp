#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,4},{2,4},{3,6},{4,4}};
        vector<int> a1 = {2,3,4,5};
        auto actual = s.minInterval(a0, a1);
        vector<int> expected = {3,3,1,4};
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<vector<int>> a0 = {{2,3},{2,5},{1,8},{20,25}};
        vector<int> a1 = {2,19,5,22};
        auto actual = s.minInterval(a0, a1);
        vector<int> expected = {2,-1,4,6};
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,1}};
        vector<int> a1 = {0,1,2,1};
        auto actual = s.minInterval(a0, a1);
        vector<int> expected = {-1,1,-1,1};
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,10},{2,3}};
        vector<int> a1 = {3,2,3};
        auto actual = s.minInterval(a0, a1);
        vector<int> expected = {2,2,2};
        nc::eq(actual, expected);
    });
    return nc::finish();
}
