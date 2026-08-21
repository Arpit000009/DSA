class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int>mpp;

        for(int i=1;i<=n;i++){
            mpp[i] = 0;
        }

        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        vector<int>vec(2,0);
        for(auto it:mpp){
            if(it.second == 2){
                vec[0] = it.first;
            }
            if(it.second == 0){
                vec[1] = it.first;
                cout<<it.first;
            }
        }

        return vec;
    }
};