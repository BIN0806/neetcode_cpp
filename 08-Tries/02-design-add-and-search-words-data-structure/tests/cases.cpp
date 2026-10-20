#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        WordDictionary s; s.addWord("bad"); s.addWord("dad"); s.addWord("mad"); nc::eq(s.search("pad"),false); nc::eq(s.search("bad"),true); nc::eq(s.search(".ad"),true); nc::eq(s.search("b.."),true); nc::eq(s.search(".."),false);
    });
    nc::test("case 2", [] {
        WordDictionary s; nc::eq(s.search("."),false); s.addWord("a"); s.addWord("ab"); nc::eq(s.search("."),true); nc::eq(s.search(".."),true); nc::eq(s.search("a."),true); nc::eq(s.search(".b"),true); nc::eq(s.search("..."),false);
    });
    return nc::finish();
}
