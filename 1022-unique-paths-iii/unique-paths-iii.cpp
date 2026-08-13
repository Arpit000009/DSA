class Solution {
public:

    int result = 0;

    void path(int i,int j,vector<vector<int>>& grid,int nonobs,int m,int n,int count){
        if(i<0||j<0||i>=m||j>=n||grid[i][j]==-1){
            return;
        }

        if(grid[i][j]==2){
            if(count == nonobs){
                result++;
            }
                return;
        }

        int temp = grid[i][j];
        grid[i][j] = -1;

            path(i-1,j,grid,nonobs,m,n,count+1);
            path(i,j+1,grid,nonobs,m,n,count+1);
            path(i+1,j,grid,nonobs,m,n,count+1);
            path(i,j-1,grid,nonobs,m,n,count+1);
        
        grid[i][j] = temp;
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        int nonobs = 1;
        int starti;
        int startj;

        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(grid[i][j]==1){
                    starti = i;
                    startj = j;
                }
                if(grid[i][j]==0){
                    nonobs++;
                }
            }
        }
        int count = 0;

        path(starti,startj,grid,nonobs,m,n,count);   
        
        return result;
    }
};