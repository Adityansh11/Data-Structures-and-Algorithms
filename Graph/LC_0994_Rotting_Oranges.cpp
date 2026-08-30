class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        int ans=0;
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                }
            }
        }
        while(!q.empty()){
            int f=q.front().first.first;
            int s=q.front().first.second;
            int time=q.front().second;
            q.pop();
            if(f-1>=0 && !vis[f-1][s] && grid[f-1][s]==1){
                q.push({{f-1,s},time+1});
                vis[f-1][s]=true;
            }
            if(f+1<n && !vis[f+1][s] && grid[f+1][s]==1){
                q.push({{f+1,s},time+1});
                vis[f+1][s]=true;
            }
            if(s-1>=0 && !vis[f][s-1] && grid[f][s-1]==1){
                q.push({{f,s-1},time+1});
                vis[f][s-1]=true;
            }
            if(s+1<m && !vis[f][s+1] && grid[f][s+1]==1){
                q.push({{f,s+1},time+1});
                vis[f][s+1]=true;
            }
            ans=max(ans,time);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==1){
                    return -1;
              }
            }
        }        return ans;
    }
};