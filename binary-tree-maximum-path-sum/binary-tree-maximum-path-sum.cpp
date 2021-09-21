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
   int height(TreeNode* node,int &mega)
   {
       if(node == nullptr)
           return 0; 
       int ll = max(0,height(node->left,mega));
       int rr = max(0,height(node->right,mega));
       mega = max(mega,ll+rr+node->val);
       return max(ll,rr)+node->val;
   }
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        height(root,ans);
        return ans;
    }
};
 //same concept off the diamter of tree