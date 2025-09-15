class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        string s = "";
        vector<string>str;
        for(int i=0;i<text.size();i++){
            if(text[i]==' '){
                str.push_back(s);
                s = "";
            }else{
            s = s+text[i];
            }
        }
        str.push_back(s);
        int count = str.size();
        for(int i=0;i<str.size();i++){
            string ss = str[i];
            unordered_set<char>ch(ss.begin(),ss.end());
           
            for(int i=0;i<brokenLetters.size();i++){
                if(ch.find(brokenLetters[i])!=ch.end()){
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};