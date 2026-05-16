class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string s = "balloon";
        map<char,int>bal;
        map<char,int>txt;
        for(int i=0;i<s.size();i++){
            bal[s[i]]++;
        }
        int ans = INT_MAX;
        for(int i=0;i<text.size();i++){
            txt[text[i]]++;

        }

        for(auto it:bal){
            int one = txt[it.first]/it.second;
            ans = min(ans,one);
        }
        return ans;
    }
};