#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        auto* a0=nc::tree({2,1,3});
        nc::eq(s.isValidBST(a0),true);
    });
    nc::test("case 2", [] {
        Solution s;
        auto* a0=nc::tree({5,1,4,nullopt,nullopt,3,6});
        nc::eq(s.isValidBST(a0),false);
    });
    nc::test("case 3", [] {
        Solution s;
        auto* a0=nc::tree({2,2,2});
        nc::eq(s.isValidBST(a0),false);
    });
    nc::test("case 4", [] {
        Solution s;
        auto* a0=nc::tree({2147483647});
        nc::eq(s.isValidBST(a0),true);
    });
    nc::test("case 5", [] {
        Solution s;
        auto* a0=nc::tree({5,4,6,nullopt,nullopt,3,7});
        nc::eq(s.isValidBST(a0),false);
    });
    return nc::finish();
}
