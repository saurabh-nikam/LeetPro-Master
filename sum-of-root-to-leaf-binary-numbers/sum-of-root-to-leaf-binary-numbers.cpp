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
    int go(TreeNode* r,int v)
    {
        if(r == NULL)
            return 0;
        v = v*2 + r->val;
        if(r->left == NULL && r->left == r->right)
            return v;
       return  go(r->left,v)+go(r->right,v);
        
    }
    int sumRootToLeaf(TreeNode* root) {

        int ans = 0;
        if(root == NULL)
            return ans;
        
        return go(root,0);
        
    }
};