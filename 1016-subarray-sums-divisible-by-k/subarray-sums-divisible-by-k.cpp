class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int result = 0;
        unordered_map<int,int>mpp;
        int sum = 0;
        int n = nums.size();
        mpp[0] = 1;

        for(int i=0;i<n;i++){
            sum += nums[i];
            int rem = ((sum % k) + k) % k;
            if(mpp.find(rem)!=mpp.end()){
                result += mpp[rem];
                mpp[rem]++;
            }
            else{
                mpp[rem] = 1;
            }
        }
        return result;
    }
};