class Solution {
public:

    void dfs(vector<vector<int>>& image, int sr, int sc, int color,int init,int m,int n){
        if(color==init){
            return;
        }
        if(sr<0 || sc<0 || sr>=m || sc>=n || image[sr][sc]!=init){
            return;
        }
        if(image[sr][sc]==init){
            image[sr][sc] = color;
        }

        dfs(image,sr-1,sc,color,init,m,n);
        dfs(image,sr,sc+1,color,init,m,n);
        dfs(image,sr+1,sc,color,init,m,n);
        dfs(image,sr,sc-1,color,init,m,n);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int init = image[sr][sc];

        int m = image.size();
        int n = image[0].size();

        dfs(image,sr,sc,color,init,m,n);

        return image;
    }
};