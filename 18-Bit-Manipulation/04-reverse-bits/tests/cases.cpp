#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        uint32_t a0 = 43261596u;
        auto actual = s.reverseBits(a0);
        uint32_t expected = 964176192u;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        uint32_t a0 = 4294967293u;
        auto actual = s.reverseBits(a0);
        uint32_t expected = 3221225471u;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        uint32_t a0 = 0u;
        auto actual = s.reverseBits(a0);
        uint32_t expected = 0u;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        uint32_t a0 = 1u;
        auto actual = s.reverseBits(a0);
        uint32_t expected = 2147483648u;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        uint32_t a0 = 4294967295u;
        auto actual = s.reverseBits(a0);
        uint32_t expected = 4294967295u;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
