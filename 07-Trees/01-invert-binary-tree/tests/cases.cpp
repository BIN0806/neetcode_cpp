#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        auto* a0=nc::tree({4,2,7,1,3,6,9});
        nc::sameTree(s.invertTree(a0),nc::tree({4,7,2,9,6,3,1}));
    });
    nc::test("case 2", [] {
        Solution s;
        auto* a0=nc::tree({});
        nc::sameTree(s.invertTree(a0),nc::tree({}));
    });
    nc::test("case 3", [] {
        Solution s;
        auto* a0=nc::tree({1,2});
        nc::sameTree(s.invertTree(a0),nc::tree({1,nullopt,2}));
    });
    nc::test("case 4", [] {
        Solution s;
        auto* a0=nc::tree({1});
        nc::sameTree(s.invertTree(a0),nc::tree({1}));
    });
    return nc::finish();
}
