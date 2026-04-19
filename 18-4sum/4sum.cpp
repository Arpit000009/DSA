class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> result;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                set<int> hashset;
                for(int k=j+1;k<nums.size();k++){
                    long long sum = 0;
                    sum = sum + nums[i];
                    sum = sum + nums[j];
                    sum = sum+nums[k];
                    long long fourth = target-sum;
                   if(fourth >= INT_MIN && fourth <= INT_MAX &&
   hashset.find((int)fourth) != hashset.end()){
                        vector<int>temp={nums[i],nums[j],nums[k],(int)fourth};
                        sort(temp.begin(),temp.end());
                        result.insert(temp);
                    }
                    vector<int>temp;
                    hashset.insert(nums[k]);
                }
            }
        }
        return vector<vector<int>>(result.begin(),result.end());
    }
};