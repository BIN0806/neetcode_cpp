// Upstream reference solution; spoilers. See ../../../SOURCES.md for attribution.
/**
 * LeetCode 104: Maximum Depth of Binary Tree
 * Time Complexity: O(n)
 * Space Complexity: O(h)
 */
#include <algorithm>

// TreeNode is supplied by the local judge header.

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
    }
};
