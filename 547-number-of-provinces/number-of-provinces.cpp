class Solution {
public:

    void dfs(int i,vector<int> adlist[],vector<bool>&vis){
        vis[i] = true;

        for(int u:adlist[i]){
            if(!vis[u]){
                dfs(u,adlist,vis);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int v = isConnected.size();
        vector<int> adlist[v];

        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adlist[i].push_back(j);
                    adlist[j].push_back(i);
                }
            }
        }
        vector<bool>vis(v,false);
        int count = 0;
        for(int i=0;i<v;i++){
            if(!vis[i]){
                dfs(i,adlist,vis);
                count++;
            }
        }
        return count;
    }
};