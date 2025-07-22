class Solution {
public:
    string reformatNumber(string number) {
        vector<char>ch;
        for(int i=0;i<number.size();i++){
            if(isalnum(number[i])){
                ch.push_back(number[i]);
            }
        }
        string ans = "";
        while(ch.size()>0){
            if(ch.size()>4 ){
                ans = ans + ch[0] + ch[1] + ch[2] + "-";
                ch.erase(ch.begin());
                ch.erase(ch.begin());
                ch.erase(ch.begin());
            }
            else if(ch.size()==4){
                ans = ans + ch[0] + ch[1] + "-" + ch[2] + ch[3];
                 ch.erase(ch.begin()); ch.erase(ch.begin()); ch.erase(ch.begin()); ch.erase(ch.begin());
            }
            else{
                ans = ans + ch[0];
                ch.erase(ch.begin());
            }
        }
        return ans;
    }
};