class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string>ans(n);
        priority_queue<pair<int,int>>pq;
        for(int i = 0;i<n;i++)
        {
            pq.push({score[i],i});
        }
        int i = 0;
        while(pq.size() > 0)
        {
            auto it = pq.top();
            pq.pop();
            if(i == 0)
            {
                i++;
                ans[it.second] = "Gold Medal";
            }else if(i == 1)
            {
                i++;
                ans[it.second] = "Silver Medal";  
            }else if(i == 2)
            {
                i++;
                ans[it.second] = "Bronze Medal";  
            }else
            {
                ans[it.second] = to_string(i+1);
                i++;
            }
        }
        return ans;
        
    }
};