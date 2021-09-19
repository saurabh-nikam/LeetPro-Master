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
    vector<int> largestValues(TreeNode* root) {
          vector<int>ans;
        if(root == NULL)
           return ans;
        queue<TreeNode* >q;
        q.push(root);
      int count = 1;int maxxi = INT_MIN;
        while(!q.empty())
        {
            
           
           TreeNode* data = q.front();
            if(data->left)
                q.push(data->left);
            if(data->right)
                q.push(data->right);
             
             q.pop();
            maxxi = max(maxxi,data->val);
            count--;
            if(count == 0)
                {ans.push_back(maxxi);maxxi= INT_MIN;count = q.size();}
        }
        return ans;
        
    }
};