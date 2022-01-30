class Solution {
public:
    void reverse(vector<int>&arr,int i,int k)
    {
        int end = k;
        int start = i;
        while(start <= end)
        {
            swap(arr[start++],arr[end--]);
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        // arr[i] = arr[i+k%n]
        if(n <= 1)
            return;
        k = k%n;
        
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
        
    }
};