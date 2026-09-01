class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<char>> vis (n,vector<char>(m,'#'));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            int j=0;
                if(board[i][j]=='O'){
                    vis[i][j]='O';
                    q.push({i,j});
                }

            }
            for(int i=0;i<n;i++){
            int j=m-1;
                if(board[i][j]=='O'){
                    vis[i][j]='O';
                    q.push({i,j});
                }
            }
        for(int j=1;j<m;j++){
            int i=0;
            if(board[i][j]=='O'){
                    vis[i][j]='O';
                    q.push({i,j});
                }
        }
        for(int j=1;j<m;j++){
            int i=n-1;
            if(board[i][j]=='O'){
                    vis[i][j]='O';
                    q.push({i,j});
                }
        }

        while(!q.empty()){
            int f=q.front().first;
            int s=q.front().second;
            q.pop();

            if(f-1>=0 && vis[f-1][s]=='#' ){
                if( board[f-1][s]=='O'){
                vis[f-1][s]='O';
                q.push({f-1,s});
                }else{
              vis[f-1][s]='X';
            }
        }
            if(f+1<n &&  vis[f+1][s]=='#' ){
                 if( board[f+1][s]=='O'){
                vis[f+1][s]='O';
                q.push({f+1,s});
                }else{
              vis[f+1][s]='X';
            }
            }

            if(s-1>=0 && vis[f][s-1]=='#' ){
              if( board[f][s-1]=='O'){
                vis[f][s-1]='O';
                q.push({f,s-1});
                }else{
              vis[f][s-1]='X';
            }}

             if(s+1<m && vis[f][s+1]=='#' ){
              if( board[f][s+1]=='O'){
                vis[f][s+1]='O';
                q.push({f,s+1});
                }else{
              vis[f][s+1]='X';
            }
        }
        }
        for(int i=0;i<n;i++ ){
            for(int j=0;j<m;j++){
                if(vis[i][j]=='#'){
                    vis[i][j]='X';
                }
            }
        }
        
        board=vis;
           }
};