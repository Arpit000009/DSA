class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0;
        int j = i+k;

        double sum = 0;
        while(i<j){
            sum = sum + nums[i];
            i++;
        }
        double maxsum = sum;
            int l = 0;
        while(i<nums.size()){
            sum = sum + nums[i];
            sum = sum - nums[l];
            i++;
            l++;
            if(sum>maxsum){
                maxsum = sum;
            }

            
        }

        return maxsum/k;
    }
};