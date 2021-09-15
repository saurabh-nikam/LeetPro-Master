class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto &i:nums)
            mp[i]++;
        vector<pair<int,int>>mk;
        for(auto it:mp)
        {
            mk.push_back({it.second,it.first});
        }
        sort(mk.begin(),mk.end(),greater<pair<int,int>>());
        vector<int>ans;
        for(auto itr : mk)
        {
            if(k--)
            {
                ans.push_back(itr.second);
            }else
                break;
        }
        return ans;
        
        
    }
};