#pragma once

// Standard headers and the node types normally supplied by an online judge.
#include <algorithm>
#include <array>
#include <bit>
#include <bitset>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdint>
#include <cstdlib>
#include <deque>
#include <exception>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <memory>
#include <numeric>
#include <optional>
#include <queue>
#include <random>
#include <set>
#include <source_location>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <string>
#include <tuple>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int v = 0, ListNode* n = nullptr) : val(v), next(n) {}
};

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int v = 0, TreeNode* l = nullptr, TreeNode* r = nullptr)
        : val(v), left(l), right(r) {}
};

#ifdef NEETCODE_RANDOM_NODE
class Node {
public:
    int val;
    Node* next = nullptr;
    Node* random = nullptr;
    explicit Node(int v) : val(v) {}
};
#endif

#ifdef NEETCODE_GRAPH_NODE
class Node {
public:
    int val = 0;
    vector<Node*> neighbors;
    Node() = default;
    explicit Node(int v) : val(v) {}
    Node(int v, vector<Node*> n) : val(v), neighbors(std::move(n)) {}
};
#endif

namespace nc {
struct NotImplemented : runtime_error {
    NotImplemented() : runtime_error("Implement this method in solution.hpp") {}
};
}
