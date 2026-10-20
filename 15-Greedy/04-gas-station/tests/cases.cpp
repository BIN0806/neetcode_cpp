#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {1,2,3,4,5};
        vector<int> a1 = {3,4,5,1,2};
        auto actual = s.canCompleteCircuit(a0, a1);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {2,3,4};
        vector<int> a1 = {3,4,3};
        auto actual = s.canCompleteCircuit(a0, a1);
        int expected = -1;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {5};
        vector<int> a1 = {4};
        auto actual = s.canCompleteCircuit(a0, a1);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {1};
        vector<int> a1 = {2};
        auto actual = s.canCompleteCircuit(a0, a1);
        int expected = -1;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {3,1,1};
        vector<int> a1 = {1,2,2};
        auto actual = s.canCompleteCircuit(a0, a1);
        int expected = 0;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
