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
     void DFS(vector<string>& ans,string s,TreeNode* root){
        s += to_string(root->val);
        if(root->left==NULL && root->right==NULL)
        {   
            ans.push_back(s); 
            return;
        }
        if(root->left) DFS(ans,s+"->",root->left);
        if(root->right) DFS(ans,s+"->",root->right);
        return;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string s="";
        DFS(ans,s,root);
        return ans;
    }
};
