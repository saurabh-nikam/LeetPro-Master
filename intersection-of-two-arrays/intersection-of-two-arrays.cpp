class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        set<int>all;set<int>a;
        vector<int>ans;
        for(int i = 0;i<n;i++)
            all.insert(nums1[i]);
        for(int i = 0;i<m;i++)
        {
            if(all.find(nums2[i]) != all.end())
            {ans.push_back(nums2[i]);all.erase(nums2[i]);}
        }
        return ans;
            
    }
};