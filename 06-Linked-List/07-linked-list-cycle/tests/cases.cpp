#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s; auto* a=nc::linked({3,2,0,-4}); a->next->next->next->next=a->next; nc::eq(s.hasCycle(a),true);
    });
    nc::test("case 2", [] {
        Solution s; auto* a=nc::linked({1}); a->next=a; nc::eq(s.hasCycle(a),true);
    });
    nc::test("case 3", [] {
        Solution s; nc::eq(s.hasCycle(nc::linked({1,2,3})),false);
    });
    nc::test("case 4", [] {
        Solution s; nc::eq(s.hasCycle(nullptr),false);
    });
    return nc::finish();
}
