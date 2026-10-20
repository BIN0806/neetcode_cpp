#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        string a0 = "ababcbacadefegdehijhklij";
        auto actual = s.partitionLabels(a0);
        vector<int> expected = {9,7,8};
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        string a0 = "eccbbbbdec";
        auto actual = s.partitionLabels(a0);
        vector<int> expected = {10};
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        string a0 = "abc";
        auto actual = s.partitionLabels(a0);
        vector<int> expected = {1,1,1};
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        string a0 = "a";
        auto actual = s.partitionLabels(a0);
        vector<int> expected = {1};
        nc::eq(actual, expected);
    });
    return nc::finish();
}
