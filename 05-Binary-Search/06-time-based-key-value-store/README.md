# Time Based Key-Value Store

| | |
|---|---|
| **LeetCode ID** | 981 |
| **Difficulty** | Medium |
| **Category** | Binary Search |
| **LeetCode URL** | https://leetcode.com/problems/time-based-key-value-store/ |

## Problem

Design a time-based key-value data structure that can store multiple values for the same key at different timestamps and retrieve the value corresponding to a key at a certain timestamp. Implement the TimeMap class with set(key, value, timestamp) and get(key, timestamp) methods. The get method returns the value with the largest timestamp <= the given timestamp.

## Examples

**Example 1:**
```
Input
["TimeMap","set","get","get","set","get","get"]
[[],["foo","bar",1],["foo",1],["foo",3],["foo","bar2",4],["foo",4],["foo",5]]
Output
[null,null,"bar","bar",null,"bar2","bar2"]
```

## Constraints

- 1 <= key.length, value.length <= 100
- key and value consist of lowercase English letters and digits.
- 1 <= timestamp <= 10^7
- All the timestamps timestamp of set are strictly increasing.
- At most 2 * 10^5 calls will be made to set and get.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
