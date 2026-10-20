# Plus One

| | |
|---|---|
| **LeetCode ID** | 66 |
| **Difficulty** | Easy |
| **Category** | Math & Geometry |
| **LeetCode URL** | https://leetcode.com/problems/plus-one/ |

## Problem

You are given a large integer represented as an integer array digits where each digits[i] is the ith digit of the integer. Increment the large integer by one and return the resulting array of digits.

## Examples

**Example 1:**
```
Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123. Incrementing by one gives 123 + 1 = 124.
```

**Example 2:**
```
Input: digits = [4,3,2,1]
Output: [4,3,2,2]
```

**Example 3:**
```
Input: digits = [9]
Output: [1,0]
```

## Constraints

- 1 <= digits.length <= 100
- 0 <= digits[i] <= 9
- digits does not contain any leading 0's.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
