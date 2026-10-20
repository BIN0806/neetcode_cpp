# Implement Trie (Prefix Tree)

| | |
|---|---|
| **LeetCode ID** | 208 |
| **Difficulty** | Medium |
| **Category** | Tries |
| **LeetCode URL** | https://leetcode.com/problems/implement-trie-prefix-tree/ |

## Problem

A trie (pronounced as "try") or prefix tree is a tree data structure used to efficiently store and retrieve keys in a dataset of strings. Implement the Trie class with insert, search, and startsWith methods.

## Examples

**Example 1:**
```
Input
["Trie", "insert", "search", "search", "startsWith", "insert", "search"]
[[], ["apple"], ["apple"], ["app"], ["app"], ["app"], ["app"]]
Output
[null, null, true, false, true, null, true]

Explanation
Trie trie = new Trie();
trie.insert("apple");
trie.search("apple");   // return True
trie.search("app");     // return False
trie.startsWith("app"); // return True
trie.insert("app");
trie.search("app");     // return True
```

## Constraints

- 1 <= word.length, prefix.length <= 1000
- word and prefix consist only of lowercase English letters.
- At most 3 * 10^4 calls in total will be made to insert, search, and startsWith.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
