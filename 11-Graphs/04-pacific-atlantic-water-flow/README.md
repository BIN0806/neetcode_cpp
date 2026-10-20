# Pacific Atlantic Water Flow

| | |
|---|---|
| **LeetCode ID** | 417 |
| **Difficulty** | Medium |
| **Category** | Graphs |
| **LeetCode URL** | https://leetcode.com/problems/pacific-atlantic-water-flow/ |

## Problem

There is an m x n rectangular island that borders both the Pacific Ocean and Atlantic Ocean. The Pacific Ocean touches the island's left and top edges, and the Atlantic Ocean touches the island's right and bottom edges. Rain water can flow from a cell to neighboring cells directly north, south, east, and west if the neighboring cell's height is less than or equal to the current cell's height. Return a 2D list of grid coordinates result where result[i] = [ri, ci] denotes that rain water can flow from cell (ri, ci) to both oceans.

## Examples

**Example 1:**
```
Input: heights = [[1,2,2,3,5],[3,2,3,4,4],[2,4,5,3,1],[6,7,1,4,5],[5,1,1,2,4]]
Output: [[0,4],[1,3],[1,4],[2,2],[3,0],[3,1],[4,0]]
```

**Example 2:**
```
Input: heights = [[1]]
Output: [[0,0]]
```

## Constraints

- m == heights.length
- n == heights[i].length
- 1 <= m, n <= 200
- 1 <= heights[i][j] <= 10^5

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
