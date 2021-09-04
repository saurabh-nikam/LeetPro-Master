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
    // vector<int>arr;
    // void inorder(TreeNode*root){
    //     if(root==NULL){
    //         return;
    //     }
    //     inorder(root->left);
    //     arr.push_back(root->val);
    //     inorder(root->right);
    // }
    // bool findTarget(TreeNode* root, int k) {
    //     arr.clear();
    //     inorder(root);
    //     int l=0,r = arr.size()-1;
    //     while(l<r){
    //         int sum = arr[l]+arr[r];
    //         if(sum==k){
    //             return true;
    //         }
    //         else if(sum<k){
    //             l++;
    //         }
    //         else{
    //             r--;
    //         }
    //     }
    //     return false;
        unordered_set<int> s;
    bool findTarget(TreeNode* root, int k) {
        if (!root) return false;
        if (s.count(k - root->val)) return true;
        s.insert(root->val);
        return findTarget(root->left, k) || findTarget(root->right, k);
    }
    
};