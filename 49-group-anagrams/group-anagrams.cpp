class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mpp;

        for(string s:strs){
            string key = s;
            sort(key.begin(),key.end());

            mpp[key].push_back(s);
        }
        vector<vector<string>>vec;

        for(auto it:mpp){
            vec.push_back(it.second);
        }

        return vec;
    }
};