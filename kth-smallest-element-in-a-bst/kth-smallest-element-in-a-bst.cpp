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
    void help(TreeNode* root,vector<int>&ans,int k)
    {
        if(root == NULL)
            return ;
        help(root->left,ans,k);
        ans.push_back(root->val);
        help(root->right,ans,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>ans;
        //idea  is that inorder tarvesral is sorted for bst
        //return indedx at k-1 th position
        help(root,ans,k);
        return ans[k-1];
        
    }
};