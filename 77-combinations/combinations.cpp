class Solution {
public:
        vector<vector<int>>result;
        void backtrack(int n,int k,int start,vector<int>&path){
            if(path.size()==k){
                result.push_back(path);
                return;
            }
            for(int i=start;i<=n;i++){
                path.push_back(i);
                backtrack(n,k,i+1,path);
                path.pop_back();
            }
        }
    vector<vector<int>> combine(int n, int k) {
        vector<int>path;
        backtrack(n,k,1,path);
        return result;
    }
};