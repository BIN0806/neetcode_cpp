# Two Sum II - Input Array Is Sorted

| | |
|---|---|
| **LeetCode ID** | 167 |
| **Difficulty** | Medium |
| **Category** | Two Pointers |
| **LeetCode URL** | https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/ |

## Problem

Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2. You may not use the same element twice.

## Examples

**Example 1:**
```
Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
```

**Example 2:**
```
Input: numbers = [2,3,4], target = 6
Output: [1,3]
```

**Example 3:**
```
Input: numbers = [-1,0], target = -1
Output: [1,2]
```

## Constraints

- 2 <= numbers.length <= 3 * 10^4
- -1000 <= numbers[i] <= 1000
- numbers is sorted in non-decreasing order
- The tests are generated such that there is exactly one solution.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
