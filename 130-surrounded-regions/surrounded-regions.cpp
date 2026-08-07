class Solution {
public:

    void dfs(int i,int j,vector<vector<char>>& board,vector<vector<int>> &vis,int m,int n){
        if(i<0||j<0||i>=m||j>=n||vis[i][j]==1||board[i][j]=='X'){
            return;
        }
        vis[i][j] = 1;
        dfs(i-1,j,board,vis,m,n);
        dfs(i,j+1,board,vis,m,n);
        dfs(i+1,j,board,vis,m,n);
        dfs(i,j-1,board,vis,m,n);
    }

    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O' && vis[i][j]==0){
                    if(j==0||j==n-1||i==0||i==m-1){
                        dfs(i,j,board,vis,m,n);
                    }
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O' && vis[i][j]==0){
                    board[i][j] = 'X';
                }
            }
        }
    }
};