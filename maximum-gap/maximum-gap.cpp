class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if(n < 2)
            return 0;
        else if(n == 2)
            return abs(nums[0]-nums[1]);
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(int i = 1;i<n;i++)
            ans = max(ans,nums[i]-nums[i-1]);
        return ans;
        
    }
};