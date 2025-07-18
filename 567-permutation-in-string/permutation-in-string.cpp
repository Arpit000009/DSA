class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        if (n > m) return false;
        
        map<char,int>mpp;
        for(int i=0;i<s1.size();i++){
            mpp[s1[i]]++;
        }

        map<char, int> mp;
        for (int i = 0; i < s1.size(); i++) {
            mp[s2[i]]++;
        }

        if(mp==mpp) return true;

        for(int i=s1.size();i<s2.size();i++){
             mp[s2[i]]++;           
            mp[s2[i - s1.size()]]--;

            if (mp[s2[i - s1.size()]] == 0) 
            mp.erase(s2[i - s1.size()]);

            if(mpp==mp) return true;
        }
        return false;
    }
};