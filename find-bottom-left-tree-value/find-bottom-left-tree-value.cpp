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
public:void helper(TreeNode* root,int &ans,int curlevel,int &maxlevel)
    {
        if(root == NULL )
            return ;
        if(maxlevel < curlevel)
        {
            maxlevel = curlevel;
            ans = root->val;
        }
        helper(root->left,ans,curlevel+1,maxlevel);
        helper(root->right,ans,curlevel+1,maxlevel);
    }
    
    int findBottomLeftValue(TreeNode* root) {
        int maxlevel  = 0;int ans = 0;int curlevel = 0;
        helper(root,ans,curlevel+1,maxlevel);
        return ans;
    }
};