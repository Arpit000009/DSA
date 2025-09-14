class Solution {
public:
        unordered_set<string>exactset;
        unordered_map<string,string>lowerset;
        unordered_map<string,string>vowelset;

        string toLower(string s){
            for(char & ch:s){
               ch= tolower(ch);
            }
            return s;
        }

    string replacevowel(string s){
        string str = toLower(s);
        for(int i=0;i<s.length();i++){
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
                str[i] = '*';
            }
        }
        return str;
    }

    string querytomatch(string s){
        if(exactset.count(s)){
            return s;
        }

        string lowercase = toLower(s);
        if(lowerset.count(lowercase)){
            return lowerset[lowercase];
        }

        string vowelcase = replacevowel(s);
        if(vowelset.count(vowelcase)){
            return vowelset[vowelcase];
        }

        return "";
    }

    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {

        for(string word:wordlist){
            exactset.insert(word);

            string lowercase = toLower(word);
            if(lowerset.find(lowercase)==lowerset.end()){
                lowerset[lowercase] = word;
            }

            string vowelcase = replacevowel(word);
           if(vowelset.find(vowelcase) == vowelset.end()){
                vowelset[vowelcase] = word;
            }
        }
        vector<string>vec;
        for(string q:queries){
           vec.push_back(querytomatch(q));
        }
        return vec;
    }
};