class Solution {
public:

    bool dfs(int node, vector<vector<int>>& graph,
             vector<int>& vis, vector<int>& pathvis,
             vector<int>& safe) {

        vis[node] = 1;
        pathvis[node] = 1;

        for(auto it : graph[node]) {

            if(!vis[it]) {

                if(dfs(it, graph, vis, pathvis, safe)) {
                    return true;
                }

            }
            else if(pathvis[it]) {
                return true;
            }
        }

        pathvis[node] = 0;
        safe[node] = 1;

        return false;
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {

        int V = graph.size();

        vector<int> vis(V, 0);
        vector<int> pathvis(V, 0);
        vector<int> safe(V, 0);

        vector<int> ans;

        for(int i = 0; i < V; i++) {

            if(!vis[i]) {
                dfs(i, graph, vis, pathvis, safe);
            }
        }

        for(int i = 0; i < V; i++) {

            if(safe[i] == 1) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};