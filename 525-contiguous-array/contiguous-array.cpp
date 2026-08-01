class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                nums[i] = -1;
            }
        }
        int sum = 0;
        mpp[sum] = -1;
        int maxlen = 0;

        for(int i=0;i<nums.size();i++){
            sum = sum + nums[i];
            if(mpp.find(sum)==mpp.end()){
                mpp[sum] = i;
            }
            else{
                int currlen = i-mpp[sum];
                if(currlen>maxlen){
                    maxlen = currlen;
                }
            }
        }
        return maxlen;
    }
};