# Longest Substring Without Repeating Characters

| | |
|---|---|
| **LeetCode ID** | 3 |
| **Difficulty** | Medium |
| **Category** | Sliding Window |
| **LeetCode URL** | https://leetcode.com/problems/longest-substring-without-repeating-characters/ |

## Problem

Given a string s, find the length of the longest substring without repeating characters. A substring is a contiguous non-empty sequence of characters within a string.

## Examples

**Example 1:**
```
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
```

**Example 2:**
```
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
```

**Example 3:**
```
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
```

## Constraints

- 0 <= s.length <= 5 * 10^4
- s consists of English letters, digits, symbols, and spaces.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
