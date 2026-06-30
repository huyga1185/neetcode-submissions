/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isValidBst(root, INT_MAX, INT_MIN);
    }
    bool isValidBst(TreeNode* node, int max, int min) {
        if (node == nullptr) return true;
        if (node->val <= min || node->val >= max) return false;
        bool left = isValidBst(node->left, node->val, min);
        bool right = isValidBst(node->right, max, node->val);
        return left && right;
    }
};
