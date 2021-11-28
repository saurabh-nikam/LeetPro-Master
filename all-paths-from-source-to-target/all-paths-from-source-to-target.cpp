//here start is 0 end is n-1
//then do the dfs and its done
class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    void dfs(vector<vector<int>>& graph,int s,int d)
    {
        temp.push_back(s);
        if(s == d)
            {ans.push_back(temp);}
        else
        {
            for(auto tnode : graph[s])
                dfs(graph,tnode,d);
        }
        //dont forget to backtrack
        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        if(n == 0)
            return ans;
        dfs(graph,0,n-1);
        
        return ans;       
    }
};