#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<vector<char>> a0 = nc::board({"oaan","etae","ihkr","iflv"});
        vector<string> a1 = {"oath","pea","eat","rain"};
        auto actual = s.findWords(a0, a1);
        vector<string> expected = {"eat","oath"};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 2", [] {
        Solution s;
        vector<vector<char>> a0 = nc::board({"ab","cd"});
        vector<string> a1 = {"abcb"};
        auto actual = s.findWords(a0, a1);
        vector<string> expected = {};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 3", [] {
        Solution s;
        vector<vector<char>> a0 = nc::board({"a"});
        vector<string> a1 = {"a","aa"};
        auto actual = s.findWords(a0, a1);
        vector<string> expected = {"a"};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 4", [] {
        Solution s;
        vector<vector<char>> a0 = nc::board({"aa"});
        vector<string> a1 = {"a","aa","aaa"};
        auto actual = s.findWords(a0, a1);
        vector<string> expected = {"a","aa"};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    return nc::finish();
}
