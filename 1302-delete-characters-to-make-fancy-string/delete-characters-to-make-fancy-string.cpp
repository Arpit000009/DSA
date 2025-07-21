class Solution {
public:
    string makeFancyString(string s) {
        string ss = "";

        int num=0;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                num++;
            }
            else{
                num = 0;
            }

            if(num<2){
                ss +=s[i-1];
            }
        }
        ss += s.back();
        return ss;
    }
};