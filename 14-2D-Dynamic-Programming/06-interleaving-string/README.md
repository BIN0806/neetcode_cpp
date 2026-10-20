# Interleaving String

| | |
|---|---|
| **LeetCode ID** | 97 |
| **Difficulty** | Medium |
| **Category** | 2-D Dynamic Programming |
| **LeetCode URL** | https://leetcode.com/problems/interleaving-string/ |

## Problem

Given strings s1, s2, and s3, find whether s3 is formed by an interleaving of s1 and s2. An interleaving of two strings s and t is a configuration where s and t are divided into n and m substrings respectively, such that the interleaving is s1 + t1 + s2 + t2 + ... or t1 + s1 + t2 + s2 + ... without changing the relative order of characters.

## Examples

**Example 1:**
```
Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac"
Output: true
```

**Example 2:**
```
Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbbaccc"
Output: false
```

**Example 3:**
```
Input: s1 = "", s2 = "", s3 = ""
Output: true
```

## Constraints

- 0 <= s1.length, s2.length <= 100
- 0 <= s3.length <= 200
- s1, s2, and s3 consist of lowercase English letters.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
