#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s; auto* r=nc::tree({6,2,8,0,4,7,9,nullopt,nullopt,3,5}); nc::check(s.lowestCommonAncestor(r,nc::find(r,2),nc::find(r,8))==nc::find(r,6),"must return the existing ancestor node");
    });
    nc::test("case 2", [] {
        Solution s; auto* r=nc::tree({6,2,8,0,4,7,9,nullopt,nullopt,3,5}); nc::check(s.lowestCommonAncestor(r,nc::find(r,2),nc::find(r,4))==nc::find(r,2),"must return the existing ancestor node");
    });
    nc::test("case 3", [] {
        Solution s; auto* r=nc::tree({6,2,8,0,4,7,9,nullopt,nullopt,3,5}); nc::check(s.lowestCommonAncestor(r,nc::find(r,3),nc::find(r,5))==nc::find(r,4),"must return the existing ancestor node");
    });
    nc::test("case 4", [] {
        Solution s; auto* r=nc::tree({6,2,8,0,4,7,9,nullopt,nullopt,3,5}); nc::check(s.lowestCommonAncestor(r,nc::find(r,7),nc::find(r,9))==nc::find(r,8),"must return the existing ancestor node");
    });
    return nc::finish();
}
