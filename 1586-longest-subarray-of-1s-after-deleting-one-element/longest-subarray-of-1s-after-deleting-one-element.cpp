class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int maxlen = 0;
        int len;
        int zeros = 0;

        while(j<nums.size()){
            if(nums[j]==0){
                zeros++;
            }
            if(zeros<=1){
            len = j-i;

            if(len>maxlen){
                maxlen = len;
            }
            }
            while(zeros>1 && i<nums.size()){
                if(nums[i]==0){
                    zeros--;
                }
                i++;
            }
            j++;
        }
        return maxlen;
    }
};