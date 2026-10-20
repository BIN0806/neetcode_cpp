# Minimum Interval to Include Each Query

| | |
|---|---|
| **LeetCode ID** | 1851 |
| **Difficulty** | Hard |
| **Category** | Intervals |
| **LeetCode URL** | https://leetcode.com/problems/minimum-interval-to-include-each-query/ |

## Problem

You are given a 2D integer array intervals and an integer array queries. For each query, find the minimum size of an interval that contains the query value. Return an array of the answers. If no interval contains the query, return -1.

## Examples

**Example 1:**
```
Input: intervals = [[1,4],[2,4],[3,6],[4,4]], queries = [2,3,4,5]
Output: [3,3,1,4]
Explanation: The answers for the queries are as follows:
- Query = 2: The interval [2,4] is the smallest interval containing 2. The answer is 4 - 2 + 1 = 3.
- Query = 3: The interval [2,4] is the smallest interval containing 3. The answer is 4 - 2 + 1 = 3.
- Query = 4: The interval [4,4] is the smallest interval containing 4. The answer is 4 - 4 + 1 = 1.
- Query = 5: The interval [3,6] is the smallest interval containing 5. The answer is 6 - 3 + 1 = 4.
```

**Example 2:**
```
Input: intervals = [[2,3],[2,5],[1,8],[20,25]], queries = [2,19,5,22]
Output: [2,-1,4,6]
```

## Constraints

- 1 <= intervals.length <= 10^5
- 1 <= queries.length <= 10^5
- intervals[i].length == 2
- 1 <= lefti <= righti <= 10^7
- 1 <= queries[j] <= 10^7

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
