class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        int n = queries.size();
        cout<<"value of n"<<n;
        vector<int>vec;
        for(int i=0;i<n;i++){
            int currentSumReq = queries[i];
           
            // if(nums[0]>queries[i]){
            //     vec.push_back(0);
            //     continue;
            // }
            int sum = 0;
           for(int j = 0 ;j<nums.size();j++){
            sum += nums[j];
                if(sum>currentSumReq){
                    vec.push_back(j);
                    cout<<endl;
                    break;
                }
                if(j==nums.size()-1){
                    vec.push_back(nums.size());
                }
                
                
           }
           
                
            
        }
        return vec;
    }
};