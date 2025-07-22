class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int min = INT_MAX;
        for(int i=1;i<arr.size();i++){
            if((arr[i]-arr[i-1])<min){
                min = arr[i]-arr[i-1];
            }
        }
        vector<vector<int>>vec;
        for(int i=1;i<arr.size();i++){
            vector<int>ans;
            if((arr[i]-arr[i-1])==min){
                ans.push_back(arr[i-1]);
                ans.push_back(arr[i]);
            }
            if(ans.size()!=0){
            vec.push_back(ans);
            }
        }
        return vec;
    }
};