# Maximum Product Subarray

| | |
|---|---|
| **LeetCode ID** | 152 |
| **Difficulty** | Medium |
| **Category** | 1-D Dynamic Programming |
| **LeetCode URL** | https://leetcode.com/problems/maximum-product-subarray/ |

## Problem

Given an integer array nums, find a subarray that has the largest product, and return the product. The test cases are generated so that the answer will fit in a 32-bit integer.

## Examples

**Example 1:**
```
Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
```

**Example 2:**
```
Input: nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
```

## Constraints

- 1 <= nums.length <= 20
- -10 <= nums[i] <= 10
- The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
