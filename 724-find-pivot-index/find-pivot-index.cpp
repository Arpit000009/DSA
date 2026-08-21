class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return 0;
        }
        int sumleft = 0;
        int sumright = 0;
        for(int i=1;i<n;i++){
            sumright += nums[i];
        }
        if(sumleft==sumright){
            return 0;
        }

        for(int i=1;i<n;i++){
            sumleft += nums[i-1];
            sumright -= nums[i];
            if(sumleft==sumright){
                return i;
            }
        }

        return -1;
    }
};