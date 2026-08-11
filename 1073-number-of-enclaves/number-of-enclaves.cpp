class Solution {
public:

    void dfs(int i,int j,int m,int n,vector<vector<int>>&grid){
        if(i>=m || j>=n || i<0 || j<0 || grid[i][j]==0){
            return;
        }

        grid[i][j] = 0;

        dfs(i-1,j,m,n,grid);
        dfs(i,j+1,m,n,grid);
        dfs(i+1,j,m,n,grid);
        dfs(i,j-1,m,n,grid);
    }

    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i = 0;i<=0;i++){
            for(int j = 0;j<n;j++){
                dfs(i,j,m,n,grid);
            }
        }
        for(int i = m-1;i<=m-1;i++){
            for(int j = 0;j<n;j++){
                dfs(i,j,m,n,grid);
            }
        }
        for(int i = 0;i<=m;i++){
            for(int j = 0;j<=0;j++){
                dfs(i,j,m,n,grid);
            }
        }
        for(int i = 0;i<=m;i++){
            for(int j = n-1;j<=n-1;j++){
                dfs(i,j,m,n,grid);
            }
        }
        int count = 0;
        for(int i=0;i<m;i++){
            for(int j = 0; j<n ; j++){
                if(grid[i][j]==1){
                    count++;
                }
            }
        }
        return count;

    }
};