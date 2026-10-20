# Rotting Oranges

| | |
|---|---|
| **LeetCode ID** | 994 |
| **Difficulty** | Medium |
| **Category** | Graphs |
| **LeetCode URL** | https://leetcode.com/problems/rotting-oranges/ |

## Problem

You are given an m x n grid where each cell can have one of three values: 0 (empty), 1 (fresh orange), or 2 (rotten orange). Every minute, any fresh orange that is 4-directionally adjacent to a rotten orange becomes rotten. Return the minimum number of minutes that must elapse until no cell has a fresh orange. If this is impossible, return -1.

## Examples

**Example 1:**
```
Input: grid = [[2,1,1],[1,1,0],[0,1,1]]
Output: 4
```

**Example 2:**
```
Input: grid = [[2,1,1],[0,1,1],[1,0,1]]
Output: -1
```

**Example 3:**
```
Input: grid = [[0,2]]
Output: 0
```

## Constraints

- m == grid.length
- n == grid[i].length
- 1 <= m, n <= 10
- grid[i][j] is 0, 1, or 2.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
