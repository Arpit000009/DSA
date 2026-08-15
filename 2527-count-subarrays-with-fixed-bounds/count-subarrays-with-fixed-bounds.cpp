class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int culpindex = -1;
        int minidx = -1;
        int maxidx = -1;
        long long ans = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxK || nums[i]<minK){
                culpindex = i;
            }
            if(nums[i]==minK){
                minidx = i;
            }
            if(nums[i]==maxK){
                maxidx = i;
            }

            int smaller = min(minidx,maxidx);
            int temp = smaller - culpindex;
            ans += temp<0 ?0:temp;
        }
        return ans;
    }
};