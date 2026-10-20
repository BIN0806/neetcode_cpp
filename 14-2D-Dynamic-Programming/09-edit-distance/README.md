# Edit Distance

| | |
|---|---|
| **LeetCode ID** | 72 |
| **Difficulty** | Medium |
| **Category** | 2-D Dynamic Programming |
| **LeetCode URL** | https://leetcode.com/problems/edit-distance/ |

## Problem

Given two strings word1 and word2, return the minimum number of operations required to convert word1 to word2. You have the following three operations permitted on a word: insert a character, delete a character, or replace a character.

## Examples

**Example 1:**
```
Input: word1 = "horse", word2 = "ros"
Output: 3
Explanation: horse -> rorse (replace 'h' with 'r'), rorse -> rose (remove 'r'), rose -> ros (remove 'e')
```

**Example 2:**
```
Input: word1 = "intention", word2 = "execution"
Output: 5
Explanation: intention -> inention (remove 't'), inention -> enention (replace 'i' with 'e'), enention -> exention (replace 'n' with 'x'), exention -> exection (replace 'n' with 'c'), exection -> execution (insert 'u')
```

## Constraints

- 0 <= word1.length, word2.length <= 500
- word1 and word2 consist of lowercase English letters.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
