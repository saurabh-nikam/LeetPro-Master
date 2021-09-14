class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int ,int>mp;
        int n = arr.size();
        for(auto &i : arr)
            mp[i]++;
        vector<pair<int,int>>help;
        for(auto it : mp)
        {
            help.push_back({-1*it.second,it.first});
        }
        sort(help.begin(),help.end());
        int sum = 0;
        int count = 0;
        for(auto it : help)
        {
            if(sum >= (n+1)/2)
            {
                break;
            }
            count++;
            sum += abs(it.first);
        }
        return count;
    }
};