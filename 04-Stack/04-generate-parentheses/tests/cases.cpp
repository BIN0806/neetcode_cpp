#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        int a0 = 1;
        auto actual = s.generateParenthesis(a0);
        vector<string> expected = {"()"};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 2", [] {
        Solution s;
        int a0 = 2;
        auto actual = s.generateParenthesis(a0);
        vector<string> expected = {"(())","()()"};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 3", [] {
        Solution s;
        int a0 = 3;
        auto actual = s.generateParenthesis(a0);
        vector<string> expected = {"((()))","(()())","(())()","()(())","()()()"};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    return nc::finish();
}
