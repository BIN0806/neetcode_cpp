# Decode Ways

| | |
|---|---|
| **LeetCode ID** | 91 |
| **Difficulty** | Medium |
| **Category** | 1-D Dynamic Programming |
| **LeetCode URL** | https://leetcode.com/problems/decode-ways/ |

## Problem

You have intercepted a secret message encoded as a string of digits. The message is decoded by mapping each digit to a letter using 'A' -> 1, 'B' -> 2, ..., 'Z' -> 26. Given a string s containing only digits, return the number of ways to decode it.

## Examples

**Example 1:**
```
Input: s = "12"
Output: 2
Explanation: "12" could be decoded as "AB" (1 2) or "L" (12).
```

**Example 2:**
```
Input: s = "226"
Output: 3
Explanation: "226" could be decoded as "BZ" (2 26), "VF" (22 6), or "BBF" (2 2 6).
```

**Example 3:**
```
Input: s = "06"
Output: 0
Explanation: "06" cannot be mapped to "F" because of the leading zero.
```

## Constraints

- 1 <= s.length <= 100
- s contains only digits and may contain leading zero(s).

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
