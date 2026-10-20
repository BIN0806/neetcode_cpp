#pragma once
#include "neetcode.hpp"

namespace nc {
inline int cases = 0, assertions = 0, failed = 0, unfinished = 0;

template<class T> string show(const T& value);
template<class T> string show(const vector<T>& value) {
    string result = "[";
    for (size_t i = 0; i < value.size(); ++i) {
        if (i) result += ", ";
        result += show(value[i]);
    }
    return result + "]";
}
template<class T> string show(const T& value) {
    ostringstream stream;
    stream << boolalpha << value;
    return stream.str();
}
inline string show(const string& value) { return '"' + value + '"'; }

inline void check(bool condition, string message = "condition failed",
                  source_location where = source_location::current()) {
    ++assertions;
    if (!condition) throw runtime_error(message + " (line " + to_string(where.line()) + ")");
}
template<class A, class B>
void eq(const A& actual, const B& expected,
        source_location where = source_location::current()) {
    ++assertions;
    if (!(actual == expected)) {
        throw runtime_error("expected " + show(expected) + ", got " + show(actual)
                            + " (line " + to_string(where.line()) + ")");
    }
}
inline void near(double actual, double expected, double tolerance = 1e-9) {
    check(isfinite(actual) && abs(actual - expected) <= tolerance * max(1.0, abs(expected)),
          "expected approximately " + show(expected) + ", got " + show(actual));
}
template<class T> vector<T> sorted(vector<T> items) {
    sort(items.begin(), items.end());
    return items;
}
// Use only when order within a row AND order between rows are unspecified.
template<class T> vector<vector<T>> groups(vector<vector<T>> items) {
    for (auto& row : items) sort(row.begin(), row.end());
    return sorted(items);
}
template<class F> void test(const string& name, F body) {
    ++cases;
    try { body(); }
    catch (const NotImplemented&) { ++unfinished; cout << "  TODO " << name << '\n'; }
    catch (const exception& error) { ++failed; cout << "  FAIL " << name << ": " << error.what() << '\n'; }
    catch (...) { ++failed; cout << "  FAIL " << name << ": unknown exception\n"; }
}
inline int finish() {
    cout << "NC_RESULT cases=" << cases << " assertions=" << assertions
         << " failed=" << failed << " unfinished=" << unfinished << '\n';
    return failed ? 1 : unfinished ? 2 : (assertions == 0 ? 1 : 0);
}

// Nodes used as inputs live until the test executable exits. The tests run in
// separate processes; this also allows solutions that delete or rearrange nodes.
inline ListNode* linked(const vector<int>& values) {
    ListNode dummy;
    auto* tail = &dummy;
    for (int value : values) { tail->next = new ListNode(value); tail = tail->next; }
    return dummy.next;
}
inline vector<int> values(ListNode* node) {
    vector<int> result;
    unordered_set<ListNode*> seen;
    while (node) {
        check(seen.insert(node).second, "unexpected cycle in output list");
        result.push_back(node->val);
        check(result.size() <= 100000, "output list is too long");
        node = node->next;
    }
    return result;
}
inline TreeNode* tree(const vector<optional<int>>& values) {
    if (values.empty() || !values.front()) return nullptr;
    auto* root = new TreeNode(*values.front());
    queue<TreeNode*> nodes; nodes.push(root);
    size_t i = 1;
    while (!nodes.empty() && i < values.size()) {
        auto* node = nodes.front(); nodes.pop();
        for (auto** child : {&node->left, &node->right}) {
            if (i < values.size() && values[i]) { *child = new TreeNode(*values[i]); nodes.push(*child); }
            ++i;
        }
    }
    return root;
}
inline vector<optional<int>> treeValues(TreeNode* root) {
    vector<optional<int>> result;
    queue<TreeNode*> nodes; nodes.push(root);
    unordered_set<TreeNode*> seen;
    while (!nodes.empty()) {
        auto* node = nodes.front(); nodes.pop();
        if (!node) { result.push_back(nullopt); continue; }
        check(seen.insert(node).second, "cycle or shared child in output tree");
        result.push_back(node->val);
        nodes.push(node->left); nodes.push(node->right);
    }
    while (!result.empty() && !result.back()) result.pop_back();
    return result;
}
inline void sameTree(TreeNode* a, TreeNode* b) {
    check(treeValues(a) == treeValues(b), "tree structure or node values differ");
}
inline TreeNode* find(TreeNode* root, int value) {
    if (!root || root->val == value) return root;
    auto* left = find(root->left, value);
    return left ? left : find(root->right, value);
}
inline vector<vector<char>> board(const vector<string>& rows) {
    vector<vector<char>> result;
    for (auto& row : rows) result.emplace_back(row.begin(), row.end());
    return result;
}
inline bool courseOrder(const vector<int>& order, int n, const vector<vector<int>>& edges) {
    if (order.size() != size_t(n)) return false;
    vector<int> pos(n, -1);
    for (int i = 0; i < n; ++i) {
        if (order[i] < 0 || order[i] >= n || pos[order[i]] != -1) return false;
        pos[order[i]] = i;
    }
    for (const auto& e : edges) if (pos[e[1]] >= pos[e[0]]) return false;
    return true;
}
inline bool alienOrder(const string& order, const vector<string>& words) {
    unordered_set<char> letters;
    for (auto& word : words) for (char c : word) letters.insert(c);
    if (order.size() != letters.size()) return false;
    unordered_map<char, int> pos;
    for (int i = 0; i < int(order.size()); ++i) {
        if (!letters.count(order[i]) || pos.count(order[i])) return false;
        pos[order[i]] = i;
    }
    for (size_t i = 1; i < words.size(); ++i) {
        auto& a = words[i-1]; auto& b = words[i];
        size_t j = 0;
        while (j < min(a.size(), b.size()) && a[j] == b[j]) ++j;
        if (j == b.size() && a.size() > b.size()) return false;
        if (j < min(a.size(), b.size()) && pos[a[j]] >= pos[b[j]]) return false;
    }
    return true;
}
}
