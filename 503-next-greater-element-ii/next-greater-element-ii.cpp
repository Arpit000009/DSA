class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            int flag = 0;
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[i]){
                    ans.push_back(nums[j]);
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){

            for(int j = 0;j<=i-1;j++){
                if(nums[j]>nums[i]){
                    
                        ans.push_back(nums[j]);
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag == 0){
                ans.push_back(-1);
            }
            
        }
        return ans;
    }
};