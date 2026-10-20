# Number of Connected Components in an Undirected Graph

| | |
|---|---|
| **LeetCode ID** | 323 |
| **Difficulty** | Medium |
| **Category** | Graphs |
| **LeetCode URL** | https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/ |

## Problem

You have a graph of n nodes. You are given an integer n and an array edges where edges[i] = [ai, bi] indicates that there is an edge between ai and bi in the graph. Return the number of connected components in the graph.

## Examples

**Example 1:**
```
Input: n = 5, edges = [[0,1],[1,2],[3,4]]
Output: 2
```

**Example 2:**
```
Input: n = 5, edges = [[0,1],[1,2],[2,3],[3,4]]
Output: 1
```

## Constraints

- 1 <= n <= 2000
- 1 <= edges.length <= 5000
- edges[i].length == 2
- 0 <= ai <= bi < n
- ai != bi
- There are no repeated edges.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
