#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {1,1,1,2,2,3};
        int a1 = 2;
        auto actual = s.topKFrequent(a0, a1);
        vector<int> expected = {1,2};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {1};
        int a1 = 1;
        auto actual = s.topKFrequent(a0, a1);
        vector<int> expected = {1};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {-1,-1,2,2,2,3};
        int a1 = 1;
        auto actual = s.topKFrequent(a0, a1);
        vector<int> expected = {2};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {4,4,5,5};
        int a1 = 2;
        auto actual = s.topKFrequent(a0, a1);
        vector<int> expected = {4,5};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    return nc::finish();
}
