class Solution {
public:

    bool bfs(int i,vector<vector<int>>& graph,vector<int>arr){
        queue<int>q;
        q.push(i);
        arr[i] = 0;
        
        while(!q.empty()){

        int node = q.front();
        q.pop();
        for(auto it:graph[node]){
            if(arr[it]==-1){
                arr[it] = !arr[node];
                q.push(it);
            }
            else if(arr[it] == arr[node]){
                return false;
            }
        }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>arr(n,-1);
        

        for(int i=0;i<n;i++){
            if(bfs(i,graph,arr)==false){
                return false;
            }
        }
        return true;
    }
};