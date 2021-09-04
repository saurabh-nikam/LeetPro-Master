class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
        vector<int>ans;
        map<int,int>mp;
        int n = nums.size();
        for(int  i = 0;i<n;i++)
        {
            int to_find = target - nums[i];
            if(mp.find(to_find) != mp.end())
            {
                ans.push_back(i);
                ans.push_back(mp[to_find]);
                return ans;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};