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
public:int total = 0;
    void find(TreeNode* root,int sum,int cursum)
    {
        if(root == NULL)
            return;
        cursum += root->val;
        if(sum == cursum)
        {
            total++;
        }
        find(root->left,sum,cursum);
        find(root->right,sum,cursum);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root == NULL)
            return 0;
        find(root,targetSum,0);
        pathSum(root->left,targetSum);
        pathSum(root->right,targetSum);
        return total;
      }
};