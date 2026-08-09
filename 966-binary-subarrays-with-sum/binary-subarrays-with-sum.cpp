class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        vector<int>prefix(n,0);
        int sum = 0;
        for(int i=0;i<n;i++){
            sum = sum + nums[i];
            prefix[i] = sum;
        }

        map<int,int>mpp;
        int count = 0;
        for(int i = 0;i<n;i++){
            if(prefix[i]==goal){
                count++;
            }
            int reqsum = prefix[i] - goal;
            if(mpp.find(reqsum)!=mpp.end()){
                count = count + mpp[reqsum];
            }
            mpp[prefix[i]]++;
        }
        return count;
    }
};