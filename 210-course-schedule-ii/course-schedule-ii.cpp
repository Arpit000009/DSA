class Solution {
public:

    bool dfs(vector<vector<int>>&adj,int i,vector<bool>&vis,vector<int>&vec,vector<bool>&vispath){
        vis[i] = true;
        vispath[i] = true;
        for(int it:adj[i]){
            if(vis[it]==false){
                if(dfs(adj,it,vis,vec,vispath)){
                    return true;
                }
            }
            else if(vispath[it]==true){
                return true;
            }
        }
        vispath[i] = false;
        vec.push_back(i);

        return false;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);

        for(int i=0;i<prerequisites.size();i++){
            int u = prerequisites[i][1];
            int v = prerequisites[i][0];
            adj[u].push_back(v);
        }

        vector<bool>vis(numCourses,false);
        vector<bool>vispath(numCourses,false);
        vector<int>vec;
        
        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(dfs(adj,i,vis,vec,vispath)){
                    return {};
                }
                
            }
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }
};