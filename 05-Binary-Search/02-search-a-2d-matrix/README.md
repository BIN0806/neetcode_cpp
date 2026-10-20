# Search a 2D Matrix

| | |
|---|---|
| **LeetCode ID** | 74 |
| **Difficulty** | Medium |
| **Category** | Binary Search |
| **LeetCode URL** | https://leetcode.com/problems/search-a-2d-matrix/ |

## Problem

Write an efficient algorithm that searches for a value target in an m x n integer matrix. The matrix has the properties: integers in each row are sorted from left to right, and the first integer of each row is greater than the last integer of the previous row.

## Examples

**Example 1:**
```
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
```

**Example 2:**
```
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
```

## Constraints

- m == matrix.length
- n == matrix[i].length
- 1 <= m, n <= 100
- -10^4 <= matrix[i][j], target <= 10^4

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
