#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s; vector<int> p={3,9,20,15,7}, i={9,3,15,20,7}; nc::sameTree(s.buildTree(p,i),nc::tree({3,9,20,nullopt,nullopt,15,7}));
    });
    nc::test("case 2", [] {
        Solution s; vector<int> p={-1}, i={-1}; nc::sameTree(s.buildTree(p,i),nc::tree({-1}));
    });
    nc::test("case 3", [] {
        Solution s; vector<int> p={1,2,3}, i={3,2,1}; nc::sameTree(s.buildTree(p,i),nc::tree({1,2,nullopt,3}));
    });
    nc::test("case 4", [] {
        Solution s; vector<int> p={1,2,3}, i={1,2,3}; nc::sameTree(s.buildTree(p,i),nc::tree({1,nullopt,2,nullopt,3}));
    });
    return nc::finish();
}
