class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map<char,int>mpp;
        for(int i=0;i<p.size();i++){
            mpp[p[i]]++;
        }

        int i=0;
        int j = p.size()-1;
        vector<int>vec;
        while(j<s.size()){
            map<char,int>mp;
            int k = i;
            while(k<=j){
                mp[s[k]]++;
                k++;
            }
            if(mpp == mp){
                vec.push_back(i);
            }
            i++;
            j++;
        }
        return vec;
    }
};