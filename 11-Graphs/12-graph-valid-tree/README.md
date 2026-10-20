# Graph Valid Tree

| | |
|---|---|
| **LeetCode ID** | 261 |
| **Difficulty** | Medium |
| **Category** | Graphs |
| **LeetCode URL** | https://leetcode.com/problems/graph-valid-tree/ |

## Problem

Given n nodes labeled from 0 to n-1 and a list of undirected edges (each edge is a pair of nodes), write a function to check whether these edges make up a valid tree. A valid tree is connected and has exactly n-1 edges with no cycles.

## Examples

**Example 1:**
```
Input: n = 5, edges = [[0,1],[0,2],[0,3],[1,4]]
Output: true
```

**Example 2:**
```
Input: n = 5, edges = [[0,1],[1,2],[2,3],[1,3],[1,4]]
Output: false
```

## Constraints

- 1 <= n <= 2000
- 0 <= edges.length <= 5000
- edges[i].length == 2
- 0 <= ai, bi < n
- ai != bi
- There are no repeated edges.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
