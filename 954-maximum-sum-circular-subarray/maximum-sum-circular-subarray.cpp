class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int wholesum = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            wholesum += nums[i];
        }

        int maxsum = nums[0];
        int currsum = nums[0];
        for(int i=1;i<n;i++){
            currsum = max(nums[i],currsum+nums[i]);
            maxsum = max(currsum,maxsum);
        }
        int ans1 = maxsum;

        currsum = nums[0];
        int minsum = nums[0];
        for(int i=1;i<n;i++){
            currsum = min(nums[i],currsum+nums[i]);
            minsum = min(currsum,minsum);
        }

        int ans2;
        if(wholesum==minsum){
            ans2 = INT_MIN;
        }
        else{
            ans2 = wholesum - minsum;
        }

        return max(ans1,ans2);
    }
};