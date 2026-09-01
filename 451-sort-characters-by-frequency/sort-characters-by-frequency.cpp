class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        vector<pair<char, int>> vec(mpp.begin(), mpp.end());

        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
        string ans = "";
        for(int i=0;i<vec.size();i++){
            while(vec[i].second--){
                ans += vec[i].first;
            }
        }
        return ans;
    }
};