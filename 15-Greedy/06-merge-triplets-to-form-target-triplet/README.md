# Merge Triplets to Form Target Triplet

| | |
|---|---|
| **LeetCode ID** | 1899 |
| **Difficulty** | Medium |
| **Category** | Greedy |
| **LeetCode URL** | https://leetcode.com/problems/merge-triplets-to-form-target-triplet/ |

## Problem

Triplets are arrays of three integers. You are given a 2D integer array triplets and a target triplet. You may select any two triplets and update them by taking the max of each position. Return true if it is possible to obtain the target triplet.

## Examples

**Example 1:**
```
Input: triplets = [[2,5,3],[1,8,4],[1,7,5]], target = [2,7,5]
Output: true
Explanation: Choose the first and third triplets then update the second value to max(5, 5) = 5 and the third value to max(3, 5) = 5, resulting in [2,7,5].
```

**Example 2:**
```
Input: triplets = [[1,3,4],[2,5,8]], target = [2,5,8]
Output: true
Explanation: The second triplet already equals the target.
```

**Example 3:**
```
Input: triplets = [[2,5,3],[2,3,4],[1,0,2]], target = [5,5,5]
Output: false
```

## Constraints

- 1 <= triplets.length <= 10^5
- triplets[i].length == 3
- 1 <= a, b, c, x, y, z <= 10^5

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
