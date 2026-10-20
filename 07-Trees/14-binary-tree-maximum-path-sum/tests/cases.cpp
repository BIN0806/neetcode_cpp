#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        auto* a0=nc::tree({1,2,3});
        nc::eq(s.maxPathSum(a0),6);
    });
    nc::test("case 2", [] {
        Solution s;
        auto* a0=nc::tree({-10,9,20,nullopt,nullopt,15,7});
        nc::eq(s.maxPathSum(a0),42);
    });
    nc::test("case 3", [] {
        Solution s;
        auto* a0=nc::tree({-3});
        nc::eq(s.maxPathSum(a0),-3);
    });
    nc::test("case 4", [] {
        Solution s;
        auto* a0=nc::tree({2,-1});
        nc::eq(s.maxPathSum(a0),2);
    });
    nc::test("case 5", [] {
        Solution s;
        auto* a0=nc::tree({-2,-1});
        nc::eq(s.maxPathSum(a0),-1);
    });
    return nc::finish();
}
