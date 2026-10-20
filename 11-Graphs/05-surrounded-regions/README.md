# Surrounded Regions

| | |
|---|---|
| **LeetCode ID** | 130 |
| **Difficulty** | Medium |
| **Category** | Graphs |
| **LeetCode URL** | https://leetcode.com/problems/surrounded-regions/ |

## Problem

Given an m x n matrix board containing 'X' and 'O', capture all regions that are 4-directionally surrounded by 'X'. A region is captured by flipping all 'O's into 'X's in that surrounded region. Surrounded regions should not be on the border, meaning any 'O' on the border or connected to a border 'O' is not captured.

## Examples

**Example 1:**
```
Input: board = [["X","X","X","X"],["X","O","O","X"],["X","X","O","X"],["X","O","X","X"]]
Output: [["X","X","X","X"],["X","X","X","X"],["X","X","X","X"],["X","O","X","X"]]
```

**Example 2:**
```
Input: board = [["X"]]
Output: [["X"]]
```

## Constraints

- m == board.length
- n == board[i].length
- 1 <= m, n <= 200
- board[i][j] is 'X' or 'O'.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
