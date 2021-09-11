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
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums);
        for(int i = 0;i<n;i++)
        {
           if(nums[i] != i +1)
               return nums[i];
        }
        return -1;
        
    }
};