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
    int countNodes(TreeNode* root) {
        if(root == nullptr) return 0;

    int height = 0;
    TreeNode* lef = root->left;
        TreeNode* righ = root->right;
    while(lef != nullptr && righ != nullptr) {
        height++; 
        lef = lef->left;
        righ = righ->right;
    }
    
    return lef == righ ? (1 << height + 1) - 1 : 1 + countNodes(root->left) + countNodes(root->right);
        
    }
};