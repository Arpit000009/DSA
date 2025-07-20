class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
            if((s[i]-97)<0){
                s[i] = s[i]+32;
            }
            }
        }
        return s;
    }
};