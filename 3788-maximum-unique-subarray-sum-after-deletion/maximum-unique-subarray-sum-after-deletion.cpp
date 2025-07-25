class Solution {
public:
    int maxSum(vector<int>& nums) {
        set<int>st;

        int flag = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                st.insert(nums[i]);
                }
        }
        int sum = 0;
        for(auto it:st){
            sum += it;
        }
        int m = INT_MIN;
        if(sum==0){
            for(int i=0;i<nums.size();i++){
                if(nums[i]>m){
                    m = (max(nums[i],m));
                }
            }
            sum = m;
        }
        return sum;
    }
};