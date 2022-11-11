class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        int n = nums.size();
        for(int i= 0;i<n;i++)
        {
            if(nums[i] == val)
            {
                count++;
                nums[i]=INT_MAX;
            }
        }
        sort(nums.begin(),nums.end());
        return (n-count);
        
    }
};