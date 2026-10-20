# Find Median from Data Stream

| | |
|---|---|
| **LeetCode ID** | 295 |
| **Difficulty** | Hard |
| **Category** | Heap / Priority Queue |
| **LeetCode URL** | https://leetcode.com/problems/find-median-from-data-stream/ |

## Problem

The median is the middle value in an ordered integer list. If the size of the list is even, there is no middle value and the median is the mean of the two middle values. Design a data structure that supports adding numbers and finding the median of the current list.

## Examples

**Example 1:**
```
Input
["MedianFinder", "addNum", "addNum", "findMedian", "addNum", "findMedian"]
[[], [1], [2], [], [3], []]
Output
[null, null, null, 1.5, null, 2.0]

Explanation
MedianFinder medianFinder = new MedianFinder();
medianFinder.addNum(1);    // arr = [1]
medianFinder.addNum(2);    // arr = [1, 2]
medianFinder.findMedian(); // return 1.5
medianFinder.addNum(3);    // arr[1, 2, 3]
medianFinder.findMedian(); // return 2.0
```

## Constraints

- -10^5 <= num <= 10^5
- There will be at least one element in the data structure before calling findMedian.
- At most 5 * 10^4 calls will be made to addNum and findMedian.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
