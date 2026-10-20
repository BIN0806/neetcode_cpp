#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {-1,0,1,2,-1,-4};
        auto actual = s.threeSum(a0);
        vector<vector<int>> expected = {{-1,-1,2},{-1,0,1}};
        nc::eq(nc::groups(actual), nc::groups(expected));
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {0,1,1};
        auto actual = s.threeSum(a0);
        vector<vector<int>> expected = {};
        nc::eq(nc::groups(actual), nc::groups(expected));
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {0,0,0,0};
        auto actual = s.threeSum(a0);
        vector<vector<int>> expected = {{0,0,0}};
        nc::eq(nc::groups(actual), nc::groups(expected));
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {-2,0,0,2,2};
        auto actual = s.threeSum(a0);
        vector<vector<int>> expected = {{-2,0,2}};
        nc::eq(nc::groups(actual), nc::groups(expected));
    });
    return nc::finish();
}
