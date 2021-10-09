class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int check = k*threshold;
        int sum = 0;
        for(int i  =0 ;i<(k-1);i++)
            sum+= arr[i];
        int end = k-1;
        int count = 0;
        int i = 0;
        while(end < n)
        {
            sum += arr[end++];
            if(sum >= check)
                count++;
            sum -= arr[i++]; 
        }
        return count;
            
        
    }
};