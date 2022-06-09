class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n = nums.size();
        vector<int>ans;
        int first = 0;
        int last = n-1;
        
        while(first < last)
        {
            int val  = nums[first] + nums[last];
            if(val == target)
            {
                ans.push_back(first+1);
                ans.push_back(last+1);
                return ans;
            }else if(val < target)
            {
                first++;
            }else
            {
                last--;
            }
        }
        
        
        return ans;
        
    }
};