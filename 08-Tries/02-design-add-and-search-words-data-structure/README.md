# Design Add and Search Words Data Structure

| | |
|---|---|
| **LeetCode ID** | 211 |
| **Difficulty** | Medium |
| **Category** | Tries |
| **LeetCode URL** | https://leetcode.com/problems/design-add-and-search-words-data-structure/ |

## Problem

Design a data structure that supports adding new words and finding if a string matches any previously added string. The search method supports '.' as a wildcard that matches any single character.

## Examples

**Example 1:**
```
Input
["WordDictionary","addWord","addWord","addWord","search","search","search","search"]
[[],["bad"],["dad"],["mad"],["pad"],["bad"],[".ad"],["b.."]]
Output
[null,null,null,null,false,true,true,true]

Explanation
WordDictionary wordDictionary = new WordDictionary();
wordDictionary.addWord("bad");
wordDictionary.addWord("dad");
wordDictionary.addWord("mad");
wordDictionary.search("pad"); // return False
wordDictionary.search("bad"); // return True
wordDictionary.search(".ad"); // return True
wordDictionary.search("b.."); // return True
```

## Constraints

- 1 <= word.length <= 25
- word in addWord consists of lowercase English letters.
- word in search consists of lowercase English letters or '.'.
- At most 10^4 calls will be made to addWord and search.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
