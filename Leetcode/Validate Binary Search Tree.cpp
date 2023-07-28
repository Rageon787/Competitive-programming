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
    bool solve(TreeNode *root, TreeNode* l, TreeNode* r)
    {
        if(root == NULL) return true;
        if((l != NULL && root->val <= l->val) || (r != NULL && root->val >= r->val)) return false;
        return solve(root->right,root,r) && solve(root->left,l,root);
    }
    bool isValidBST(TreeNode* root) {
        return solve(root,NULL,NULL);
    }
};
