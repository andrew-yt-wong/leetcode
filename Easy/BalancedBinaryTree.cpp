/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root) {
        if (!root) return 0;
        int left = height(root->left);
        int right = height(root->right);
        int curr = max(left, right) + 1;
        return curr;
    }
    
    bool isBalanced(TreeNode* root) {
        if (!root) return true;
        int left = height(root->left);
        int right = height(root->right);
        if (abs(left-right)>1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};