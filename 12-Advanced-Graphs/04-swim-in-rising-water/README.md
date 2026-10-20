# Swim in Rising Water

| | |
|---|---|
| **LeetCode ID** | 778 |
| **Difficulty** | Hard |
| **Category** | Advanced Graphs |
| **LeetCode URL** | https://leetcode.com/problems/swim-in-rising-water/ |

## Problem

On an N x N grid, each square grid[i][j] represents the elevation at that point. The rain starts to fall. At time t, the depth of the water everywhere is t. You can swim from a square to another 4-directionally adjacent square if and only if the elevation of both squares individually are at most t. You can swim infinite distances in zero time. Find the least time t so that you can reach the bottom right square from the top left square.

## Examples

**Example 1:**
```
Input: grid = [[0,2],[1,3]]
Output: 3
```

**Example 2:**
```
Input: grid = [[0,1,2,3,4],[24,23,22,21,5],[12,13,14,15,16],[11,17,18,19,20],[10,9,8,7,6]]
Output: 16
```

## Constraints

- N == grid.length
- N == grid[i].length
- 2 <= N <= 50
- grid[i][j] is a permutation of [0, ..., N*N - 1].

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
