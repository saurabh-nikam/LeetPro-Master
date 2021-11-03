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
    void helper(TreeNode* root,int&ans,int temp)
    {
        if(root == nullptr)
            return;
        temp = temp*10+root->val;
        if(root->right == nullptr && root->left == nullptr)
        {
            ans += temp;
        }
        
        helper(root->left,ans,temp);
        helper(root->right,ans,temp);
    }
    int sumNumbers(TreeNode* root) {
        int ans  =0;
        if(root == nullptr)
            return 0;
        helper(root,ans,0);
        return ans;
        
    }
};