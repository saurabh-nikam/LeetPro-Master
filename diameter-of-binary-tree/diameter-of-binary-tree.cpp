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
    int height(TreeNode* root,int &maxxi)
    {
        if(root == NULL)
            return 0;
        int ll = height(root->left,maxxi);
        int rr = height(root->right,maxxi);
        maxxi = max(maxxi,ll+rr);
        return 1+ max(ll,rr);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0 ;
        int ans = 0;
        // int ld = diameterOfBinaryTree(root->left);
        // int rd = diameterOfBinaryTree(root->right);
        
        int lh = height(root->left,ans);
        int lr = height(root->right,ans);
        
        return max(ans,lh+lr);
        
    }
};