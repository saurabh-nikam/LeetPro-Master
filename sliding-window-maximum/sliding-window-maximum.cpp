class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k ==1)
            return nums;
        int n = nums.size();
        vector<int>ans;
        if( k >= n)
        {
            int temp = *max_element(nums.begin() ,nums.end());
            ans.push_back(temp);
            return ans;
        }
        map<int,int>mp;
        for(int i = 0;i<k;i++)
        {
            mp[nums[i]]++;
        }
        auto it = mp.rbegin();
             ans.push_back(it->first);
        int j = 0;
        int i = k;
        for(;i<n;i++)
        {
           mp[nums[i]]++;
            mp[nums[j]]--;
            if(mp[nums[j]] <= 0)
                mp.erase(nums[j]);
            j++;
            auto it = mp.rbegin();
             ans.push_back(it->first);
        }
        // ans.push_back(i);
        return ans;
        
        
    }
};