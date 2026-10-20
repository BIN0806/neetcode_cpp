# Longest Common Subsequence

| | |
|---|---|
| **LeetCode ID** | 1143 |
| **Difficulty** | Medium |
| **Category** | 2-D Dynamic Programming |
| **LeetCode URL** | https://leetcode.com/problems/longest-common-subsequence/ |

## Problem

Given two strings text1 and text2, return the length of their longest common subsequence. A subsequence is a sequence that can be derived from the given string by deleting some characters without changing the order of the remaining characters. A common subsequence of two strings is a subsequence that is common to both strings.

## Examples

**Example 1:**
```
Input: text1 = "abcde", text2 = "ace"
Output: 3
Explanation: The longest common subsequence is "ace" and its length is 3.
```

**Example 2:**
```
Input: text1 = "abc", text2 = "abc"
Output: 3
Explanation: The longest common subsequence is "abc" and its length is 3.
```

**Example 3:**
```
Input: text1 = "abc", text2 = "def"
Output: 0
```

## Constraints

- 1 <= text1.length, text2.length <= 1000
- text1 and text2 consist of only lowercase English characters.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
