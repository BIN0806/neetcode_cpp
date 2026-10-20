#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<string> a0 = {"2","1","+","3","*"};
        auto actual = s.evalRPN(a0);
        int expected = 9;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<string> a0 = {"4","13","5","/","+"};
        auto actual = s.evalRPN(a0);
        int expected = 6;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<string> a0 = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
        auto actual = s.evalRPN(a0);
        int expected = 22;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<string> a0 = {"7","-3","/"};
        auto actual = s.evalRPN(a0);
        int expected = -2;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<string> a0 = {"42"};
        auto actual = s.evalRPN(a0);
        int expected = 42;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
