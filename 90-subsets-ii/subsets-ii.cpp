class Solution {
public:

    void subset(vector<int>&nums,int i, vector<int>&ans,set<vector<int>>&st){
        if(i==nums.size()){
            st.insert({ans});
            return;
        }

         ans.push_back(nums[i]);
        subset(nums,i+1,ans,st);

        ans.pop_back();
        subset(nums,i+1,ans,st);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        vector<int>ans;
        subset(nums,0,ans,st);
        vector<vector<int>>vec;

        for(vector<int> it:st){
            vec.push_back(it);
        }
        return vec;
    }
};