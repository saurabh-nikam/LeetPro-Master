class Solution {
public:
    void sort(vector<int>&arr)
    {
        int n = arr.size();
        int i = 0;
        while( i < n)
        {
            int correct = arr[i]-1;
            if(correct >= 0 && correct  < n && arr[i] != arr[correct])
                swap(arr[i],arr[correct]);
            else 
                i++;
        }
    }
    vector<int> findDuplicates(vector<int>& arr) {
        int n = arr.size();
        sort(arr);
        vector<int>ans;
        for(int i = 0;i<n;i++)
        {
            if(arr[i] != i+1)
                ans.push_back(arr[i]);
        }
        return ans;
        
    }
};