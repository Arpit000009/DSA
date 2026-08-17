class Solution {
public:

    void dfs(vector<vector<int>>& stones,int i,vector<bool>&vis){

        if(vis[i]==true){
            return;
        }

        vis[i] = true;

        for(int j=0;j<stones.size();j++){
            if(stones[i][0]==stones[j][0] || stones[i][1]==stones[j][1]){
                dfs(stones,j,vis);
            } 
        }
    }

    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        vector<bool>vis(n,false);
        int groups = 0;
        for(int i=0;i<n;i++){
            if(vis[i]==false){
                dfs(stones,i,vis);
                groups++;
            }
        }
        return n-groups;
    }
};