#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        DetectSquares s; s.add({3,10}); s.add({11,2}); s.add({3,2}); nc::eq(s.count({11,10}),1); nc::eq(s.count({14,8}),0); s.add({11,2}); nc::eq(s.count({11,10}),2);
    });
    nc::test("case 2", [] {
        DetectSquares s; nc::eq(s.count({0,0}),0); s.add({0,1}); s.add({1,0}); s.add({1,1}); s.add({0,1}); s.add({1,0}); s.add({1,1}); nc::eq(s.count({0,0}),8); s.add({0,0}); nc::eq(s.count({0,0}),8);
    });
    return nc::finish();
}
