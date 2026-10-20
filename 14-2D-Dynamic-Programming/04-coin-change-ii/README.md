# Coin Change II

| | |
|---|---|
| **LeetCode ID** | 518 |
| **Difficulty** | Medium |
| **Category** | 2-D Dynamic Programming |
| **LeetCode URL** | https://leetcode.com/problems/coin-change-ii/ |

## Problem

You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money. Return the number of combinations that make up that amount. If that amount of money cannot be made up by any combination of the coins, return 0. You may assume that you have an infinite number of each kind of coin.

## Examples

**Example 1:**
```
Input: amount = 5, coins = [1,2,5]
Output: 4
Explanation: There are four ways to make up the amount:
5=5
5=2+2+1
5=2+1+1+1
5=1+1+1+1+1
```

**Example 2:**
```
Input: amount = 3, coins = [2]
Output: 0
```

**Example 3:**
```
Input: amount = 10, coins = [10]
Output: 1
```

## Constraints

- 1 <= coins.length <= 300
- 1 <= coins[i] <= 5000
- 0 <= amount <= 5000
- The answer is guaranteed to fit in a signed 32-bit integer.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
