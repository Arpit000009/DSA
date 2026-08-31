class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minval = INT_MAX;
        int minIndex;
        int maxVal = INT_MIN;
        int maxIndex;

        for(int i=0;i<n;i++){
            if(nums[i]<minval){
                minval = nums[i];
                minIndex = i;
            }
            if(nums[i]>maxVal){
                maxVal = nums[i];
                maxIndex = i;
            }
        }

        int leftlen = max(minIndex,maxIndex)+1;
        int rightlen = n-min(minIndex,maxIndex);
        int leftrightlen = (min(minIndex,maxIndex)+1) + (n-max(minIndex,maxIndex));

        return min(leftlen,min(rightlen,leftrightlen));
    }
};