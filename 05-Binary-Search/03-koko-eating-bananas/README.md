# Koko Eating Bananas

| | |
|---|---|
| **LeetCode ID** | 875 |
| **Difficulty** | Medium |
| **Category** | Binary Search |
| **LeetCode URL** | https://leetcode.com/problems/koko-eating-bananas/ |

## Problem

Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone away and will come back in h hours. Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile and eats k bananas from that pile. Return the minimum integer k such that she can eat all the bananas within h hours.

## Examples

**Example 1:**
```
Input: piles = [3,6,7,11], h = 8
Output: 4
```

**Example 2:**
```
Input: piles = [30,11,23,4,20], h = 5
Output: 30
```

**Example 3:**
```
Input: piles = [30,11,23,4,20], h = 6
Output: 23
```

## Constraints

- 1 <= piles.length <= 10^4
- piles.length <= h <= 10^9
- 1 <= piles[i] <= 10^9

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
