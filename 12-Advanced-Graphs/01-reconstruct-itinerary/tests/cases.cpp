#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<vector<string>> a0 = {{"MUC","LHR"},{"JFK","MUC"},{"SFO","SJC"},{"LHR","SFO"}};
        auto actual = s.findItinerary(a0);
        vector<string> expected = {"JFK","MUC","LHR","SFO","SJC"};
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<vector<string>> a0 = {{"JFK","SFO"},{"JFK","ATL"},{"SFO","ATL"},{"ATL","JFK"},{"ATL","SFO"}};
        auto actual = s.findItinerary(a0);
        vector<string> expected = {"JFK","ATL","JFK","SFO","ATL","SFO"};
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<vector<string>> a0 = {{"JFK","KUL"},{"JFK","NRT"},{"NRT","JFK"}};
        auto actual = s.findItinerary(a0);
        vector<string> expected = {"JFK","NRT","JFK","KUL"};
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<vector<string>> a0 = {{"JFK","A"},{"A","JFK"},{"JFK","A"}};
        auto actual = s.findItinerary(a0);
        vector<string> expected = {"JFK","A","JFK","A"};
        nc::eq(actual, expected);
    });
    return nc::finish();
}
