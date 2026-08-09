class Solution {
public:

    int func(vector<int>& nums,int k){
        int i = 0;
        int j = 0;
        int count = 0;
        map<int,int>mpp;
        for(int j = 0;j<nums.size();j++){
            mpp[nums[j]]++;

            while(mpp.size()>k){
                    mpp[nums[i]]--;
                    if(mpp[nums[i]]==0){
                        mpp.erase(nums[i]);
                    }
                    i++;
                
            }
            count += j-i+1;
        }
        return count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return func(nums,k)-func(nums,k-1);
    }
};