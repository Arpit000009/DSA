class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxcount = 0;
        int count;
        int onecount = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                onecount++;
            }
            if(nums[i]==0){
                    count = 0;
               int right = i+1;
               int left = i-1;
               while(left>=0 && nums[left]==1){
                    left --;
                    count++;
               }
               while(right<nums.size() && nums[right]){
                    right++;
                    count++;
               }
               if(count>maxcount){
                maxcount = count;
               }
            }
        }
        return onecount==nums.size() ? onecount-1:maxcount;
    }
};