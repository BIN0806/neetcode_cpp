# Happy Number

| | |
|---|---|
| **LeetCode ID** | 202 |
| **Difficulty** | Easy |
| **Category** | Math & Geometry |
| **LeetCode URL** | https://leetcode.com/problems/happy-number/ |

## Problem

A happy number is a number which eventually reaches 1 when replaced by the sum of the square of each digit. Return true if n is a happy number, or false if it enters a cycle that does not include 1.

## Examples

**Example 1:**
```
Input: n = 19
Output: true
Explanation: 1^2 + 9^2 = 82, 8^2 + 2^2 = 68, 6^2 + 8^2 = 100, 1^2 + 0^2 + 0^2 = 1
```

**Example 2:**
```
Input: n = 2
Output: false
```

## Constraints

- 1 <= n <= 2^31 - 1

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
