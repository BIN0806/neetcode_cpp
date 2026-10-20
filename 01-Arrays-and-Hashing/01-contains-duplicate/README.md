# Contains Duplicate

| | |
|---|---|
| **LeetCode ID** | 217 |
| **Difficulty** | Easy |
| **Category** | Arrays & Hashing |
| **LeetCode URL** | https://leetcode.com/problems/contains-duplicate/ |

## Problem

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct. This is a fundamental problem that can be solved efficiently using a hash set to track seen elements.

## Examples

**Example 1:**
```
Input: nums = [1,2,3,1]
Output: true
```

**Example 2:**
```
Input: nums = [1,2,3,4]
Output: false
```

**Example 3:**
```
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
```

## Constraints

- 1 <= nums.length <= 10^5
- -10^9 <= nums[i] <= 10^9

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
