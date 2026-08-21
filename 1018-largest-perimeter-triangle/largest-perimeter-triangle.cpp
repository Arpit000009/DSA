class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        if(n<3){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int i = n-1;
        int j = n-2;
        int k = n-3;

        while(k>=0){
            if(nums[i]<nums[j]+nums[k]){
                return nums[i]+nums[j]+nums[k];
            }
            i--;
            j--;
            k--;
        }

        return 0;
    }
};