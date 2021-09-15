class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        vector<pair<int,pair<int,int>>>mk;
        for(auto it:points)
        {
            mk.push_back({it[0]*it[0]+it[1]*it[1],{it[0],it[1]}});
        }
        sort(mk.begin(),mk.end());
        for(auto itr:mk)
        {
            if(k-- > 0)
            {
                ans.push_back({itr.second.first,itr.second.second});
            }
        }
        return ans;
        
    }
};