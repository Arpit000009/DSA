class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,bool>mpp;
        for(int i=1;i<=nums.size()+1;i++){
            mpp[i] = false;
        }
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>=1 && nums[i]<=nums.size()+1){
                mpp[nums[i]] = true;
            }
        }

        for(auto it:mpp){
            if(it.second==false){
                return it.first;
                break;
            }
        }
        return 0;
    }
};