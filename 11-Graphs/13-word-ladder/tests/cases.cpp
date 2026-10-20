#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        string a0 = "hit";
        string a1 = "cog";
        vector<string> a2 = {"hot","dot","dog","lot","log","cog"};
        auto actual = s.ladderLength(a0, a1, a2);
        int expected = 5;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        string a0 = "hit";
        string a1 = "cog";
        vector<string> a2 = {"hot","dot","dog","lot","log"};
        auto actual = s.ladderLength(a0, a1, a2);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        string a0 = "a";
        string a1 = "c";
        vector<string> a2 = {"a","b","c"};
        auto actual = s.ladderLength(a0, a1, a2);
        int expected = 2;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        string a0 = "hot";
        string a1 = "dog";
        vector<string> a2 = {"hot","dog"};
        auto actual = s.ladderLength(a0, a1, a2);
        int expected = 0;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
