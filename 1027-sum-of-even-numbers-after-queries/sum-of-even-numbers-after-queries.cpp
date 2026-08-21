class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int>vec;
        int sum;
        for(int i=0;i<queries.size();i++){
            nums[queries[i][1]] += queries[i][0];
            sum = 0;
            for(int i=0;i<n;i++){
                if(nums[i]%2==0){
                sum += nums[i];
                }
            }
            vec.push_back(sum);
        }
        return vec;
    }
};