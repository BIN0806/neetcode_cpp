# Palindrome Partitioning

| | |
|---|---|
| **LeetCode ID** | 131 |
| **Difficulty** | Medium |
| **Category** | Backtracking |
| **LeetCode URL** | https://leetcode.com/problems/palindrome-partitioning/ |

## Problem

Given a string s, partition s such that every substring of the partition is a palindrome. Return all possible palindrome partitioning of s.

## Examples

**Example 1:**
```
Input: s = "aab"
Output: [["a","a","b"],["aa","b"]]
```

**Example 2:**
```
Input: s = "a"
Output: [["a"]]
```

## Constraints

- 1 <= s.length <= 16
- s contains only lowercase English letters.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
