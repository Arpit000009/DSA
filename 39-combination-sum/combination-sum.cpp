class Solution {
public:

    void allcoms(int index,vector<int>& candidates,int target,vector<int>&vec,vector<vector<int>>&ans){
        if(index == candidates.size()){
            if(target==0){
                ans.push_back(vec);
            }
            return;
        }

        if(candidates[index]<=target){
            vec.push_back(candidates[index]);
            allcoms(index,candidates,target-candidates[index],vec,ans);
            vec.pop_back();
        }
        allcoms(index+1,candidates,target,vec,ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>vec;
        vector<vector<int>>ans;
        allcoms(0,candidates,target,vec,ans);
        return ans;
    }
};