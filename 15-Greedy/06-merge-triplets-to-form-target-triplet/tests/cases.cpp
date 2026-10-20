#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<vector<int>> a0 = {{2,5,3},{1,8,4},{1,7,5}};
        vector<int> a1 = {2,7,5};
        auto actual = s.mergeTriplets(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<vector<int>> a0 = {{3,4,5},{4,5,6}};
        vector<int> a1 = {3,2,5};
        auto actual = s.mergeTriplets(a0, a1);
        bool expected = false;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<vector<int>> a0 = {{2,5,3},{2,3,4},{1,2,5},{5,2,3}};
        vector<int> a1 = {5,5,5};
        auto actual = s.mergeTriplets(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,1,1}};
        vector<int> a1 = {1,1,1};
        auto actual = s.mergeTriplets(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
