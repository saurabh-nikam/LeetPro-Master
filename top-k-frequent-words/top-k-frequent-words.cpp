class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>mp;
        for(auto &i:words)
            mp[i]++;
        set<pair<int,string>>mk;
        for(auto it:mp)
        {
            mk.insert({((-1)*it.second),it.first});
        }
        // sort(mk.begin(),mk.end(),greater<pair<int,string>>());
        vector<string>ans;
        for(auto itr : mk)
        {
            if(k--)
            {
                ans.push_back(itr.second);
            }else
                break;
        }
        return ans;
        
        
    }
};
        
