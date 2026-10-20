# Letter Combinations of a Phone Number

| | |
|---|---|
| **LeetCode ID** | 17 |
| **Difficulty** | Medium |
| **Category** | Backtracking |
| **LeetCode URL** | https://leetcode.com/problems/letter-combinations-of-a-phone-number/ |

## Problem

Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order. A mapping of digits to letters (just like on telephone buttons) is given below. 2->abc, 3->def, 4->ghi, 5->jkl, 6->mno, 7->pqrs, 8->tuv, 9->wxyz.

## Examples

**Example 1:**
```
Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
```

**Example 2:**
```
Input: digits = ""
Output: []
```

**Example 3:**
```
Input: digits = "2"
Output: ["a","b","c"]
```

## Constraints

- 0 <= digits.length <= 4
- digits[i] is a digit in the range ['2', '9'].

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
