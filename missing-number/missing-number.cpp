class Solution {
public:
    void sort(vector<int>& arr)
    {
        int n = arr.size();
        int i = 0;
        while(i < n)
        {
            int correct = arr[i];
            if(correct < n && arr[i] != arr[correct])
                swap(arr[i],arr[correct]);
            else 
                i++;
        }
    }
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums);
        for(int i = 0;i<n;i++)
        {
            if(nums[i] != i)
                return i;
        }
        return n;
        
        
    }
};