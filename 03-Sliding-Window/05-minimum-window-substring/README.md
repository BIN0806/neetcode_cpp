# Minimum Window Substring

| | |
|---|---|
| **LeetCode ID** | 76 |
| **Difficulty** | Hard |
| **Category** | Sliding Window |
| **LeetCode URL** | https://leetcode.com/problems/minimum-window-substring/ |

## Problem

Given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "".

## Examples

**Example 1:**
```
Input: s = "ADOBECODEBANC", t = "ABC"
Output: "BANC"
Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.
```

**Example 2:**
```
Input: s = "a", t = "a"
Output: "a"
```

**Example 3:**
```
Input: s = "a", t = "aa"
Output: ""
```

## Constraints

- m == s.length
- n == t.length
- 1 <= m, n <= 10^5
- s and t consist of uppercase and lowercase English letters.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
