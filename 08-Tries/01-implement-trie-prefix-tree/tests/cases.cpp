#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Trie s; s.insert("apple"); nc::eq(s.search("apple"),true); nc::eq(s.search("app"),false); nc::eq(s.startsWith("app"),true); s.insert("app"); nc::eq(s.search("app"),true);
    });
    nc::test("case 2", [] {
        Trie s; nc::eq(s.search("a"),false); nc::eq(s.startsWith("a"),false); s.insert("a"); s.insert("a"); s.insert("ab"); nc::eq(s.search("a"),true); nc::eq(s.search("ab"),true); nc::eq(s.search("abc"),false);
    });
    return nc::finish();
}
