class Solution {
public:
     bool isIncreasing(vector<int>& nums, int start, int end) {
        for (int i = start; i < end - 1; i++) {
            if (nums[i] >= nums[i + 1])
                return false;
        }
        return true;
    }


    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        
        for(int i=0;i<=nums.size()-2*k;i++){
            int first = isIncreasing(nums,i,i+k);
            int second = isIncreasing(nums,i+k,i+2*k);

            if(first == true && second == true){
                return true;
            }
        }
        return false;
    }
};