class Solution {
public:

    void allpremuntations(vector<int>&nums,vector<vector<int>>&ans,int index){
        if(index==nums.size()){
            ans.push_back(nums);
        }

        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            allpremuntations(nums,ans,index+1);
            swap(nums[index],nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        allpremuntations(nums,ans,0);

        return ans;
    }
};