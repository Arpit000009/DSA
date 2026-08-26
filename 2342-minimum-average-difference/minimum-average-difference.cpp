class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        long long sumleft = 0;
        long long sumright = 0;
        for (int i = 0; i < n; i++) {
            sumright += nums[i];
        }
        long long minavg = INT_MAX;
        int i = 0;
        int minindex = 0;
        while (i < n) {
            sumleft += nums[i];
            sumright -= nums[i];
            long long leftavg = sumleft / (i + 1);
            long long rightavg = 0;
            if(i!=n-1){
                rightavg = sumright/(n-i-1);
            }
            long long avg = abs(leftavg - rightavg);
            if (avg < minavg) {
                minavg = avg;
                minindex = i;
            }
            i++;
        }
        return minindex;
    }
};