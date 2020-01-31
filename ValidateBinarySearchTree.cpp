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
    bool isBSTHelper(TreeNode* root, TreeNode* min = NULL, TreeNode* max = NULL)
    {
        if (root == NULL) return true;
        if (min != NULL && min->val >= root->val) return false;
        if (max != NULL && max->val <= root->val) return false;
        return isBSTHelper(root->left, min, root) && isBSTHelper(root->right, root, max);
    }
    
    bool isValidBST(TreeNode* root) {
        return isBSTHelper(root, NULL, NULL);
    }
};