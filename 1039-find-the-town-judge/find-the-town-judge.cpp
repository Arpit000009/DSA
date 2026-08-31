class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size()==0 && n==1){
            return 1;
        }
        if(trust.size()==0 && n>1){
            return -1;
        }
        unordered_map<int,int>mpp;
        for(int i=0;i<trust.size();i++){
            mpp[trust[i][1]]++;
        }
        int judge = -1;
        for(auto it:mpp){
            if(it.second==n-1){
                judge = it.first;
            }
        }
        for(int i=0;i<trust.size();i++){
            if(trust[i][0]==judge){
                judge = -1;
            }
        }
        return judge;
    }
};