class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>copy = nums;
        sort(nums.begin(),nums.end());
        map<int,int>mpp;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        vector<int>vec;

        for(auto it:mpp){
            vec.push_back(it.second);
        }
        mpp.begin()->second = 0;
        auto it = mpp.begin();
    if (it != mpp.end()) ++it; 

    int one = 1;
    for (; it != mpp.end(); ++it) {
        int put = 0;
        for(int i=0;i<one;i++){
            put = put+vec[i];
        }
        one++;
        mpp[it->first] = put;
    }

    vector<int>ans;

    for(int i=0;i<copy.size();i++){
        ans.push_back(mpp[copy[i]]);
    }
    return ans;
    }
};