# Combination Sum II

| | |
|---|---|
| **LeetCode ID** | 40 |
| **Difficulty** | Medium |
| **Category** | Backtracking |
| **LeetCode URL** | https://leetcode.com/problems/combination-sum-ii/ |

## Problem

Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target. Each number in candidates may only be used once in the combination. The solution set must not contain duplicate combinations.

## Examples

**Example 1:**
```
Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: [[1,1,6],[1,2,5],[1,7],[2,6]]
```

**Example 2:**
```
Input: candidates = [2,5,2,1,2], target = 5
Output: [[1,2,2],[5]]
```

## Constraints

- 1 <= candidates.length <= 100
- 1 <= candidates[i] <= 50
- 1 <= target <= 30

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
