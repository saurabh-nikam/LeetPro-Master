class Solution {
public:
    void sort(vector<int>& arr)
    {
        int n = arr.size();
        int i = 0;
        
        while(i< n)
        {
            int correct = arr[i]-1 ;
            if(correct < n && arr[correct] != arr[i])
            {
                swap(arr[i],arr[correct]);
            }else
            {
                i++;
            }
        }
    }
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums);int n = nums.size();
        vector<int>ans;
        for(int i = 0;i<n;i++)
        {
            if(nums[i] != i +1)
            {
                ans.push_back(nums[i]);
                ans.push_back(i+1);
            } 
    }
        return ans;
    }
};