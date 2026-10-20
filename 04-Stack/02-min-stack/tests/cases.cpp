#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        MinStack s; s.push(-2); s.push(0); s.push(-3); nc::eq(s.getMin(),-3); s.pop(); nc::eq(s.top(),0); nc::eq(s.getMin(),-2);
    });
    nc::test("case 2", [] {
        MinStack s; s.push(2); s.push(2); s.push(1); s.pop(); nc::eq(s.getMin(),2); s.pop(); nc::eq(s.getMin(),2); nc::eq(s.top(),2);
    });
    nc::test("case 3", [] {
        MinStack s; s.push(INT_MAX); s.push(INT_MIN); nc::eq(s.getMin(),INT_MIN); s.pop(); nc::eq(s.top(),INT_MAX); nc::eq(s.getMin(),INT_MAX);
    });
    return nc::finish();
}
