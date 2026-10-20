# Container With Most Water

| | |
|---|---|
| **LeetCode ID** | 11 |
| **Difficulty** | Medium |
| **Category** | Two Pointers |
| **LeetCode URL** | https://leetcode.com/problems/container-with-most-water/ |

## Problem

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]). Find two lines that together with the x-axis form a container, such that the container contains the most water. Return the maximum amount of water a container can store.

## Examples

**Example 1:**
```
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The lines at index 1 and 8 form a container with height 7 and width 7, giving area 49.
```

**Example 2:**
```
Input: height = [1,1]
Output: 1
```

## Constraints

- n == height.length
- 2 <= n <= 10^5
- 0 <= height[i] <= 10^4

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
