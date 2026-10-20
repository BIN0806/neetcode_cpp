# Best Time to Buy and Sell Stock with Cooldown

| | |
|---|---|
| **LeetCode ID** | 309 |
| **Difficulty** | Medium |
| **Category** | 2-D Dynamic Programming |
| **LeetCode URL** | https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/ |

## Problem

You are given an array prices where prices[i] is the price of a given stock on the ith day. Find the maximum profit you can achieve. You may complete as many transactions as you like, but after you sell, you cannot buy on the next day (i.e., cooldown one day). You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

## Examples

**Example 1:**
```
Input: prices = [1,2,3,0,2]
Output: 3
Explanation: transactions = [buy, sell, cooldown, buy, sell]
```

**Example 2:**
```
Input: prices = [1]
Output: 0
```

## Constraints

- 1 <= prices.length <= 5000
- 0 <= prices[i] <= 1000

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
