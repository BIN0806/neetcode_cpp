#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,3},{2,6},{8,10},{15,18}};
        auto actual = s.merge(a0);
        vector<vector<int>> expected = {{1,6},{8,10},{15,18}};
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,4},{4,5}};
        auto actual = s.merge(a0);
        vector<vector<int>> expected = {{1,5}};
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,4},{2,3}};
        auto actual = s.merge(a0);
        vector<vector<int>> expected = {{1,4}};
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<vector<int>> a0 = {{5,7},{1,2}};
        auto actual = s.merge(a0);
        vector<vector<int>> expected = {{1,2},{5,7}};
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,1}};
        auto actual = s.merge(a0);
        vector<vector<int>> expected = {{1,1}};
        nc::eq(actual, expected);
    });
    return nc::finish();
}
