# Combination Sum

| | |
|---|---|
| **LeetCode ID** | 39 |
| **Difficulty** | Medium |
| **Category** | Backtracking |
| **LeetCode URL** | https://leetcode.com/problems/combination-sum/ |

## Problem

Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order. The same number may be chosen from candidates an unlimited number of times.

## Examples

**Example 1:**
```
Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
```

**Example 2:**
```
Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]
```

**Example 3:**
```
Input: candidates = [2], target = 1
Output: []
```

## Constraints

- 1 <= candidates.length <= 30
- 2 <= candidates[i] <= 40
- All elements of candidates are distinct.
- 1 <= target <= 40

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
