class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        vector<vector<bool>> visit(grid.size(),vector<bool>(grid[0].size(),false));
        queue<pair<int,int>> q;
 
        for(int  i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
             if(visit[i][j] || grid[i][j]=='0')continue;
                q.push({i,j});
                count++;
                while(q.size()){
                    int u = q.front().first;
                    int v = q.front().second;
                    q.pop();
                    if(u>=grid.size() || u<0 || v>=grid[0].size() || v<0 || visit[u][v] || grid[u][v]=='0')continue;
                    visit[u][v] = true; 
                   q.push({u+1,v});
                   q.push({u-1,v});
                   q.push({u,v+1});
                   q.push({u,v-1}); 
                }  
            }   
        }
        

        return count;
        
    }
};