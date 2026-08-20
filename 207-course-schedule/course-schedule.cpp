class Solution {
public:

    bool iscycle(vector<vector<int>>&adj,vector<bool>&vis,vector<bool>&vispath,int i){
        vis[i] = true;
        vispath[i] = true;

        for(int it:adj[i]){
            if(!vis[it]){
                if(iscycle(adj,vis,vispath,it)){
                    return true;
                }
            } else if(vispath[it]==true){
                return true;
            }
        }
        vispath[i] = false;
        return false;
    }

    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        
        vector<bool>vis(n,false);
        vector<bool>vispath(n,false);
        vector<vector<int>>adj(n);

        for(int i=0;i<prerequisites.size();i++){
            int u = prerequisites[i][1];
            int v = prerequisites[i][0];
            adj[u].push_back(v);
        }
            bool res = false;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                res += iscycle(adj,vis,vispath,i);
            }
        }
        return !res;
    }
};