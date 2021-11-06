class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mp;
        vector<int>ans;
        for(auto i:nums)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            if(i.second == 1)
            {
                ans.push_back(i.first);
            }
        }
        
        return ans;
        
    }
};