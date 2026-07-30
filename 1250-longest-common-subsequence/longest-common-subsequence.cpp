class Solution {
public:

    int func(string &text1,string &text2,int index1,int index2,vector<vector<int>>&dp){
        if(index1<0 || index2<0){
            return 0;
        }

        if(dp[index1][index2]!=-1){
            return dp[index1][index2];
        }

        if(text1[index1]==text2[index2]){
            return dp[index1][index2] = 1 + func(text1, text2, index1-1, index2-1, dp);
        }

        return  dp[index1][index2] = max(func(text1,text2,index1-1,index2,dp),func(text1,text2,index1,index2-1,dp));
    }

    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        int index1 = m-1;
        int index2 = n-1;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return func(text1,text2,index1,index2,dp);
    }
};