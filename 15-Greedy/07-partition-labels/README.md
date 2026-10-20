# Partition Labels

| | |
|---|---|
| **LeetCode ID** | 763 |
| **Difficulty** | Medium |
| **Category** | Greedy |
| **LeetCode URL** | https://leetcode.com/problems/partition-labels/ |

## Problem

You are given a string s. Partition the string into as many parts as possible so that each letter appears in at most one part. Return a list of integers representing the size of each part.

## Examples

**Example 1:**
```
Input: s = "ababcbacadefegdehijhklij"
Output: [9,7,8]
Explanation: The partition is "ababcbaca", "defegde", "hijhklij". Each letter appears in at most one part.
```

**Example 2:**
```
Input: s = "eccbbbbdec"
Output: [10]
```

## Constraints

- 1 <= s.length <= 500
- s consists of lowercase English letters.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
