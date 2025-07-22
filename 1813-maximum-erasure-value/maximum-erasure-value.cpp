class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        map<int,bool>mpp;
        int i = 0;
        int j = 0;

        int n = nums.size();
        int max_sum = INT_MIN;
        int max_win = 0;

        while(j<n){
            if(mpp.count(nums[j])){
                mpp.erase(nums[i]);
                max_win -= nums[i];
                i++;
            }
            else{
                max_win += nums[j];
                mpp[nums[j]] = true;
                j++;
                max_sum = max(max_sum,max_win);
            }
        }
        return max_sum;
    }
};