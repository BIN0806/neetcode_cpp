#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        string a0 = "23";
        auto actual = s.letterCombinations(a0);
        vector<string> expected = {"ad","ae","af","bd","be","bf","cd","ce","cf"};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 2", [] {
        Solution s;
        string a0 = "";
        auto actual = s.letterCombinations(a0);
        vector<string> expected = {};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 3", [] {
        Solution s;
        string a0 = "2";
        auto actual = s.letterCombinations(a0);
        vector<string> expected = {"a","b","c"};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 4", [] {
        Solution s;
        string a0 = "7";
        auto actual = s.letterCombinations(a0);
        vector<string> expected = {"p","q","r","s"};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    return nc::finish();
}
