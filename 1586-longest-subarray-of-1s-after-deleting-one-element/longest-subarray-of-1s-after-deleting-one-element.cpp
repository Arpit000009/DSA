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
            while(zeros>1 && i<nums.size()){
                if(nums[i]==0){
                    zeros--;
                }
                i++;
            }
            
            len = j-i;

            if(len>maxlen){
                maxlen = len;
            }
            
            j++;
        }
        return maxlen;
    }
};