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
    int ans = 0; 
    int dfs(TreeNode* node)
    {
        if(node->left == NULL && node->right == NULL) return 1; 
        int x = 0, y = 0; 
        if(node->left != NULL) x = dfs(node->left); 
        if(node->right != NULL) y = dfs(node->right); 
        ans = max(ans,x + y); 
        return max(x,y) + 1;  
    } 
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root); 
        return ans; 
    }
};
