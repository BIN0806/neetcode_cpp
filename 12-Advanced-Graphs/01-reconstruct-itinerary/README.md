# Reconstruct Itinerary

| | |
|---|---|
| **LeetCode ID** | 332 |
| **Difficulty** | Hard |
| **Category** | Advanced Graphs |
| **LeetCode URL** | https://leetcode.com/problems/reconstruct-itinerary/ |

## Problem

You are given a list of airline tickets where tickets[i] = [fromi, toi] represent the departure and the arrival airports of one flight. Reconstruct the itinerary in order and return it. All of the tickets belong to a man who departs from "JFK", thus, the itinerary must begin with "JFK". If there are multiple valid itineraries, you should return the itinerary that has the smallest lexical order when read as a single string.

## Examples

**Example 1:**
```
Input: tickets = [["MUC","LHR"],["JFK","MUC"],["SFO","SJC"],["LHR","SFO"]]
Output: ["JFK","MUC","LHR","SFO","SJC"]
```

**Example 2:**
```
Input: tickets = [["JFK","SFO"],["JFK","ATL"],["SFO","ATL"],["ATL","JFK"],["ATL","SFO"]]
Output: ["JFK","ATL","JFK","SFO","ATL","SFO"]
```

## Constraints

- 1 <= tickets.length <= 300
- tickets[i].length == 2
- fromi.length, toi.length == 3
- fromi, toi consist of uppercase English letters.
- There is at least one valid itinerary.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
