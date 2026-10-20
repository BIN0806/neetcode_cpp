#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
        int a1 = 3;
        auto actual = s.searchMatrix(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
        int a1 = 13;
        auto actual = s.searchMatrix(a0, a1);
        bool expected = false;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<vector<int>> a0 = {{1}};
        int a1 = 1;
        auto actual = s.searchMatrix(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<vector<int>> a0 = {{1},{3}};
        int a1 = 2;
        auto actual = s.searchMatrix(a0, a1);
        bool expected = false;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,3}};
        int a1 = 3;
        auto actual = s.searchMatrix(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
