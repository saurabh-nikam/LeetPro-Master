class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int k) {
        int n = nums.size();
        n = n/2;
        vector<int>ans;
        for(int i =0;i<n;i++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }
        return ans;
        
    }
};