class Solution {
public:
    int binarys(vector<int>arr)
    {
        int low = 0;
        int high =arr.size()-1;
        while(low <= high)
        {
            int mid = low+(high-low);
            if(arr[mid] == 1)
            {
                low = mid+1;
            }else 
            {
                high = mid-1;
            }     
        }
        return low;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
       set<pair<int,int>>ss;//<power of each row,index>
        int n  = mat.size();
        int m = mat[0].size();
        for(int i = 0;i<n;i++)
        {
            int xt = binarys(mat[i]);
            ss.insert({xt,i});
        }
        vector<int>ans;
        for(auto it = begin(ss); k > 0;it++)
        {
            ans.push_back(it->second);
            k--;
        }
        return ans;
        
    }
};