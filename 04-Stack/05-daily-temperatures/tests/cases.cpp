#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {73,74,75,71,69,72,76,73};
        auto actual = s.dailyTemperatures(a0);
        vector<int> expected = {1,1,4,2,1,1,0,0};
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {30,40,50,60};
        auto actual = s.dailyTemperatures(a0);
        vector<int> expected = {1,1,1,0};
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {60,50,40};
        auto actual = s.dailyTemperatures(a0);
        vector<int> expected = {0,0,0};
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {30,30,31};
        auto actual = s.dailyTemperatures(a0);
        vector<int> expected = {2,1,0};
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {100};
        auto actual = s.dailyTemperatures(a0);
        vector<int> expected = {0};
        nc::eq(actual, expected);
    });
    return nc::finish();
}
