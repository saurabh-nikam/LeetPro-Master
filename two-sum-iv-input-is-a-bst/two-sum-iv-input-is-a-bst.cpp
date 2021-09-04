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
    void inorder(TreeNode* root,vector<int>&arr)
    {
        if(root == NULL)
            return;
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
    }
    bool findTarget(TreeNode* root, int k) {
       vector<int>ans;
        inorder(root,ans);
        int n = ans.size();
        int first = 0;
        int last = n-1;
        while(first < last)
        {
            int val = ans[first]+ans[last];
            if(val == k)
            {
                return true;
            }else if(val < k)
            {
                first++;
            }else
            {
                last--;
            }
        }
        return false;
        
    }
};