class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue <pair<int,int>> q;
        vector<vector<int>> vis(n,vector<int>(m,3));

        for(int i=0;i<n;i++){
            int j=0;
            if(grid[i][j]==1){
                q.push({i,j});
            }
            vis[i][j]=grid[i][j];
        }
         for(int i=0;i<n;i++){
            int j=m-1;
            if(grid[i][j]==1){
                q.push({i,j});
            }
            vis[i][j]=grid[i][j];
        }
         for(int j=0;j<m;j++){
            int i=0;
            if(grid[i][j]==1){
                q.push({i,j});
            }
            vis[i][j]=grid[i][j];
        }for(int j=0;j<m;j++){
            int i=n-1;
            if(grid[i][j]==1){
                q.push({i,j});
            }
            vis[i][j]=grid[i][j];
        }
        int ans=0;
        while(!q.empty()){
            int f=q.front().first;
            int s=q.front().second;
            q.pop();
            if(f-1>=0 && vis[f-1][s]==3 && grid[f-1][s]==1){
                vis[f-1][s]=1;
                q.push({f-1,s});
            }
            if(f+1<n && vis[f+1][s]==3 && grid[f+1][s]==1){
                vis[f+1][s]=1;
                q.push({f+1,s});
            }if(s-1>=0 && vis[f][s-1]==3 && grid[f][s-1]==1){
                vis[f][s-1]=1;
                q.push({f,s-1});
            }if(s+1<m && vis[f][s+1]==3 && grid[f][s+1]==1){
                vis[f][s+1]=1;
                q.push({f,s+1});
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==3 && grid[i][j]==1){
                    ans++;
                }
            }
        }
        return ans;
    }
};