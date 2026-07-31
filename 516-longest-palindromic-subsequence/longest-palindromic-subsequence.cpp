class Solution {
public:

    int func(string &s1,string &s2,int index1,int index2,vector<vector<int>>&dp){
        if(index1<0 || index2<0){
            return 0;
        }
        if(dp[index1][index2]!=-1){
            return dp[index1][index2];
        }

        if(s1[index1]==s2[index2]){
            return dp[index1][index2] = 1+func(s1,s2,index1-1,index2-1,dp);
        }

        return dp[index1][index2] = max(func(s1,s2,index1-1,index2,dp),func(s1,s2,index1,index2-1,dp));
    }

    int lcs(string &s1,string &s2){
        int m = s1.size();
        int n = s2.size();
        int index1 = m-1;
        int index2 = n-1;
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return func(s1,s2,index1,index2,dp);
    }

    int longestPalindromeSubseq(string s) {
        string t = s;
        reverse(t.begin(),t.end());
        return lcs(s,t);
    }
};