class Solution {
public:
    int countHillValley(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        vector<int>vec;
        vec.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                vec.push_back(nums[i]);
            }
        }
        int count = 0;
        for(int i=1;i<vec.size()-1;i++){
            if((vec[i]>vec[i-1]&&vec[i]>vec[i+1])||(vec[i]<vec[i-1]&&vec[i]<vec[i+1])){
                count++;
            }
        }
        return count;
    }
};