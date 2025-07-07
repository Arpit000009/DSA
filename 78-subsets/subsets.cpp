class Solution {
public:

    void allSubsets(vector<int>&nums,vector<int>&ans,int i,vector<vector<int>>&vec){
        if(i==nums.size()){
            vec.push_back({ans});
            return;
        }

        ans.push_back(nums[i]);
        allSubsets(nums,ans,i+1,vec);

        ans.pop_back();
        allSubsets(nums,ans,i+1,vec);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>vec;
        vector<int>ans;
        allSubsets(nums,ans,0,vec);

        return vec;
    }
};