class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum = sum+nums[i];
        }
        vector<int>vec(nums.size());
        int one=0;
        vec[nums.size()-1] = sum;
        for(int i=nums.size()-2;i>=0;i--){
            one =one+ nums[i+1];
            vec[i]=sum-one;
        }
        return vec;
    }
};