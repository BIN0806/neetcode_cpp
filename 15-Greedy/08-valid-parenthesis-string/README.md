# Valid Parenthesis String

| | |
|---|---|
| **LeetCode ID** | 678 |
| **Difficulty** | Medium |
| **Category** | Greedy |
| **LeetCode URL** | https://leetcode.com/problems/valid-parenthesis-string/ |

## Problem

Given a string s containing only '(', ')' and '*', return true if s is valid. '*' can be treated as '(', ')' or an empty string.

## Examples

**Example 1:**
```
Input: s = "()"
Output: true
```

**Example 2:**
```
Input: s = "(*)"
Output: true
```

**Example 3:**
```
Input: s = "(*))"
Output: true
```

## Constraints

- 1 <= s.length <= 100
- s[i] is '(', ')' or '*'.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
