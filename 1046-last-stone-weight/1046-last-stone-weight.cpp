class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        // set<int>s;
        priority_queue<int>pq(begin(stones),end(stones));
        // int n = stones.size();
        while(pq.size() > 1)
        {
            int x = pq.top();pq.pop();
            int y = pq.top();pq.pop();
            if(x == y)
            {
                
            }else
            {
                pq.push(abs(x-y));
            }
        }
        return pq.size()> 0?pq.top():0;
        
    }
};