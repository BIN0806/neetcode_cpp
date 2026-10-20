#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        TimeMap s; s.set("foo","bar",1); nc::eq(s.get("foo",1),string("bar")); nc::eq(s.get("foo",3),string("bar")); s.set("foo","bar2",4); nc::eq(s.get("foo",4),string("bar2")); nc::eq(s.get("foo",5),string("bar2"));
    });
    nc::test("case 2", [] {
        TimeMap s; nc::eq(s.get("missing",1),string("")); s.set("a","one",5); s.set("a","two",10); s.set("b","other",12); nc::eq(s.get("a",4),string("")); nc::eq(s.get("a",9),string("one")); nc::eq(s.get("a",10),string("two")); nc::eq(s.get("b",20),string("other"));
    });
    return nc::finish();
}
