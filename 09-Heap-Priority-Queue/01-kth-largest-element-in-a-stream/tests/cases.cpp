#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        vector<int> a={4,5,8,2}; KthLargest s(3,a); nc::eq(s.add(3),4); nc::eq(s.add(5),5); nc::eq(s.add(10),5); nc::eq(s.add(9),8); nc::eq(s.add(4),8);
    });
    nc::test("case 2", [] {
        vector<int> a; KthLargest s(1,a); nc::eq(s.add(-3),-3); nc::eq(s.add(-2),-2); nc::eq(s.add(-4),-2); nc::eq(s.add(0),0);
    });
    return nc::finish();
}
