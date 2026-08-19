class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        map<int,int>mpp;

        int i = 0;
        int j = k-1;

        while(j<nums.size()){
            set<int>st;
            for(int l = i;l<=j;l++){

                st.insert(nums[l]);
            }
            for(int x:st){
                mpp[x]++;
            }
            i++;
            j++;
        }
        int ans = -1;

        for(auto it:mpp){
            cout<<it.first<<" "<<it.second<<endl;
            if(it.second==1){
                if(it.first>ans){
                    ans = it.first;
                }
            }
        }
        return ans;
    }
};