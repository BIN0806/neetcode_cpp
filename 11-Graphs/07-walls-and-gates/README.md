# Walls and Gates

| | |
|---|---|
| **LeetCode ID** | 286 |
| **Difficulty** | Medium |
| **Category** | Graphs |
| **LeetCode URL** | https://leetcode.com/problems/walls-and-gates/ |

## Problem

You are given an m x n grid rooms initialized with three possible values: -1 (a wall or obstacle), 0 (a gate), and INF (a large integer representing an empty room). Fill each empty room with the distance to its nearest gate. If it is impossible to reach a gate, the value should remain INF.

## Examples

**Example 1:**
```
Input: rooms = [[2147483647,-1,0,2147483647],[2147483647,2147483647,2147483647,-1],[2147483647,-1,2147483647,-1],[0,-1,2147483647,2147483647]]
Output: [[3,-1,0,1],[2,2,1,-1],[1,-1,2,-1],[0,-1,3,4]]
```

**Example 2:**
```
Input: rooms = [[-1]]
Output: [[-1]]
```

## Constraints

- m == rooms.length
- n == rooms[i].length
- 1 <= m, n <= 250
- rooms[i][j] is -1, 0, or 2^31 - 1.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
