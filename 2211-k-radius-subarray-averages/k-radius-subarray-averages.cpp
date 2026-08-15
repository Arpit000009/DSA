class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        if(n<2*k+1){
            vector<int>v(n,-1);
            return v;
        }
        vector<int>vec;
        int i = 0;
        while(i<k){
            vec.push_back(-1);
            i++;
        }
        long long sum = 0;
        for(int j = 0;j<2*k+1;j++){
            sum += nums[j];
        }
        int a = 0;
        int b = 2*k+1;
        int d = b;
        vec.push_back(sum/d);
        while(b<n){
            
            sum = sum - nums[a];
            sum = sum + nums[b];
            vec.push_back(sum/d);
            a++;
            b++;
        }

        while(k){
            vec.push_back(-1);
            k--;
        }

        return vec;
    }
};