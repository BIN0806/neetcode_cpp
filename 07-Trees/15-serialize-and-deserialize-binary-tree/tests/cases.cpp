#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Codec s; auto* r=nc::tree({}); auto encoded=s.serialize(r); auto* copy=s.deserialize(encoded); nc::sameTree(copy,r); if(r) nc::check(copy!=r,"deserialize must construct new nodes");
    });
    nc::test("case 2", [] {
        Codec s; auto* r=nc::tree({1}); auto encoded=s.serialize(r); auto* copy=s.deserialize(encoded); nc::sameTree(copy,r); if(r) nc::check(copy!=r,"deserialize must construct new nodes");
    });
    nc::test("case 3", [] {
        Codec s; auto* r=nc::tree({1,2,3,nullopt,nullopt,4,5}); auto encoded=s.serialize(r); auto* copy=s.deserialize(encoded); nc::sameTree(copy,r); if(r) nc::check(copy!=r,"deserialize must construct new nodes");
    });
    nc::test("case 4", [] {
        Codec s; auto* r=nc::tree({-1,-2,nullopt,3}); auto encoded=s.serialize(r); auto* copy=s.deserialize(encoded); nc::sameTree(copy,r); if(r) nc::check(copy!=r,"deserialize must construct new nodes");
    });
    nc::test("case 5", [] {
        Codec s; auto* r=nc::tree({1,nullopt,2,nullopt,3}); auto encoded=s.serialize(r); auto* copy=s.deserialize(encoded); nc::sameTree(copy,r); if(r) nc::check(copy!=r,"deserialize must construct new nodes");
    });
    return nc::finish();
}
