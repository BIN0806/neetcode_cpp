# Valid Parentheses

| | |
|---|---|
| **LeetCode ID** | 20 |
| **Difficulty** | Easy |
| **Category** | Stack |
| **LeetCode URL** | https://leetcode.com/problems/valid-parentheses/ |

## Problem

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid. An input string is valid if open brackets must be closed by the same type of brackets, open brackets must be closed in the correct order, and every close bracket has a corresponding open bracket of the same type.

## Examples

**Example 1:**
```
Input: s = "()"
Output: true
```

**Example 2:**
```
Input: s = "()[]{}"
Output: true
```

**Example 3:**
```
Input: s = "(]"
Output: false
```

## Constraints

- 1 <= s.length <= 10^4
- s consists of parentheses only '()[]{}'.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
