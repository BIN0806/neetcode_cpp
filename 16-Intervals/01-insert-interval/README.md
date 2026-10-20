# Insert Interval

| | |
|---|---|
| **LeetCode ID** | 57 |
| **Difficulty** | Medium |
| **Category** | Intervals |
| **LeetCode URL** | https://leetcode.com/problems/insert-interval/ |

## Problem

You are given an array of non-overlapping intervals where intervals[i] = [starti, endi] is sorted by starti. Insert newInterval into intervals such that intervals is still sorted and non-overlapping. Return the resulting intervals.

## Examples

**Example 1:**
```
Input: intervals = [[1,3],[6,9]], newInterval = [2,5]
Output: [[1,5],[6,9]]
```

**Example 2:**
```
Input: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
Output: [[1,2],[3,10],[12,16]]
Explanation: Because the new interval [4,8] overlaps with [3,5],[6,7],[8,10].
```

## Constraints

- 0 <= intervals.length <= 10^4
- intervals[i].length == 2
- 0 <= starti <= endi <= 10^5
- intervals is sorted by starti in ascending order
- newInterval.length == 2

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
