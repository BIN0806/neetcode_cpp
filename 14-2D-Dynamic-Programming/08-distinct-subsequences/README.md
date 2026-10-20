# Distinct Subsequences

| | |
|---|---|
| **LeetCode ID** | 115 |
| **Difficulty** | Hard |
| **Category** | 2-D Dynamic Programming |
| **LeetCode URL** | https://leetcode.com/problems/distinct-subsequences/ |

## Problem

Given two strings s and t, return the number of distinct subsequences of s which equals t. The test cases are generated so that the answer fits in a 32-bit signed integer.

## Examples

**Example 1:**
```
Input: s = "rabbbit", t = "rabbit"
Output: 3
Explanation: There are 3 ways you can generate "rabbit" from s: ra[b]bbit, rab[b]bit, and rabb[b]it.
```

**Example 2:**
```
Input: s = "babgbag", t = "bag"
Output: 5
Explanation: There are 5 ways to generate "bag" from s.
```

## Constraints

- 1 <= s.length, t.length <= 1000
- s and t consist of English letters.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
