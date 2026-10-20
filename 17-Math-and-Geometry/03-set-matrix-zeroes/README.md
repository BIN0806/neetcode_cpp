# Set Matrix Zeroes

| | |
|---|---|
| **LeetCode ID** | 73 |
| **Difficulty** | Medium |
| **Category** | Math & Geometry |
| **LeetCode URL** | https://leetcode.com/problems/set-matrix-zeroes/ |

## Problem

Given an m x n integer matrix, if an element is 0, set its entire row and column to 0's in-place.

## Examples

**Example 1:**
```
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
```

**Example 2:**
```
Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
```

## Constraints

- m == matrix.length
- n == matrix[i].length
- 1 <= m, n <= 200
- -2^31 <= matrix[i][j] <= 2^31 - 1

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
