# Redundant Connection

| | |
|---|---|
| **LeetCode ID** | 684 |
| **Difficulty** | Medium |
| **Category** | Graphs |
| **LeetCode URL** | https://leetcode.com/problems/redundant-connection/ |

## Problem

In this problem, a tree is an undirected graph that is connected and has no cycles. You are given a graph that started as a tree with n nodes labeled from 1 to n, and one extra edge was added. The graph is represented as an array edges of length n where edges[i] = [ai, bi] indicates an edge between nodes ai and bi. Return an edge that can be removed so that the resulting graph is a tree of n nodes. If there are multiple answers, return the last edge in the input.

## Examples

**Example 1:**
```
Input: edges = [[1,2],[1,3],[2,3]]
Output: [2,3]
```

**Example 2:**
```
Input: edges = [[1,2],[2,3],[3,4],[1,4],[1,5]]
Output: [1,4]
```

## Constraints

- n == edges.length
- 3 <= n <= 1000
- edges[i].length == 2
- 1 <= ai < bi <= edges.length
- ai != bi
- There are no repeated edges.
- The given graph is connected.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
