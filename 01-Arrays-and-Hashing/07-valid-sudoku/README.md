# Valid Sudoku

| | |
|---|---|
| **LeetCode ID** | 36 |
| **Difficulty** | Medium |
| **Category** | Arrays & Hashing |
| **LeetCode URL** | https://leetcode.com/problems/valid-sudoku/ |

## Problem

Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules: each row must contain the digits 1-9 without repetition, each column must contain the digits 1-9 without repetition, and each of the nine 3 x 3 sub-boxes must contain the digits 1-9 without repetition. Empty cells are indicated by '.'.

## Examples

**Example 1:**
```
Input: board = 
[["5","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]
Output: true
```

**Example 2:**
```
Input: board = 
[["8","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]
Output: false
```

## Constraints

- board.length == 9
- board[i].length == 9
- board[i][j] is a digit 1-9 or '.'.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
