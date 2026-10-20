#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        LRUCache s(2); s.put(1,1); s.put(2,2); nc::eq(s.get(1),1); s.put(3,3); nc::eq(s.get(2),-1); s.put(4,4); nc::eq(s.get(1),-1); nc::eq(s.get(3),3); nc::eq(s.get(4),4);
    });
    nc::test("case 2", [] {
        LRUCache s(1); s.put(1,5); s.put(1,7); nc::eq(s.get(1),7); s.put(2,9); nc::eq(s.get(1),-1); nc::eq(s.get(2),9);
    });
    nc::test("case 3", [] {
        LRUCache s(2); s.put(1,1); s.put(2,2); s.put(1,10); s.put(3,3); nc::eq(s.get(2),-1); nc::eq(s.get(1),10); nc::eq(s.get(77),-1);
    });
    return nc::finish();
}
