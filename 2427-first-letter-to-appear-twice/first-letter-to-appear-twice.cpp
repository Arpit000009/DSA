class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
            if(mpp[s[i]]==2){
                return s[i];
                break;
            }
        }
        return 'a';
    }
};