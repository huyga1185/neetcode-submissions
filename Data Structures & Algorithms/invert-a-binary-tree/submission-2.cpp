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
    void inverttree(TreeNode *t) {
        if (t == nullptr) return;
        TreeNode *temp = t->left;
        t->left = t->right;
        t->right = temp;
        inverttree(t->left);
        inverttree(t->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        TreeNode *temp = root;
        inverttree(temp);
        return root;
    }
};
