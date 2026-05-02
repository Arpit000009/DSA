class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        int closest = nums[0]+ nums[1] + nums[2];
        for(int i=0;i<nums.size()-2;i++){
            int j = i+1;
            int k = nums.size()-1;
            while(j<k){
                int curr = nums[i]+nums[j]+nums[k];
                if(abs(curr-target)<abs(closest-target)){
                    closest = curr;
                }
                if(curr<target){
                    j++;
                    
                }
                else{
                    k--;
                }
            }
        }
        return closest;
    }
};