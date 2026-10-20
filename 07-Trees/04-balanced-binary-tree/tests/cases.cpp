#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        auto* a0=nc::tree({3,9,20,nullopt,nullopt,15,7});
        nc::eq(s.isBalanced(a0),true);
    });
    nc::test("case 2", [] {
        Solution s;
        auto* a0=nc::tree({1,2,2,3,3,nullopt,nullopt,4,4});
        nc::eq(s.isBalanced(a0),false);
    });
    nc::test("case 3", [] {
        Solution s;
        auto* a0=nc::tree({});
        nc::eq(s.isBalanced(a0),true);
    });
    nc::test("case 4", [] {
        Solution s;
        auto* a0=nc::tree({1});
        nc::eq(s.isBalanced(a0),true);
    });
    return nc::finish();
}
