class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>prefix(n,0);
        int sum = 0;
        for(int i=0;i<n;i++){
            sum = sum+nums[i];
            prefix[i] = sum;
        }
        int count = 0;

        map<int,int>mpp;

        for(int i=0;i<n;i++){
            if(prefix[i]==k){
                count++;
            }
            int reqtar = prefix[i] - k;
            if(mpp.find(reqtar)!=mpp.end()){
                count += mpp[reqtar];
            }
            mpp[prefix[i]]++;
        }
        return count;
    }
};