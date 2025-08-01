class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>vec;

        for(int i=1;i<=numRows;i++){
            int ans = 1;
            vector<int>in;
            in.push_back(ans);
            for(int j = 1;j<i;j++){
                ans = ans*(i-j);
                ans = ans/j;
                in.push_back(ans);
            }
            vec.push_back(in);
        }
        return vec;
    }
};