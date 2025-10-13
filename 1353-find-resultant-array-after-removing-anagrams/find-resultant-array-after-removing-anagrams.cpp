class Solution {
public:
    bool checkanagram(string s1,string s2){
        map<char,int>mpp1;
        for(char &ch:s1){
            mpp1[ch]++;
        }

        map<char,int>mpp2;
        for(char &ch:s2){
            mpp2[ch]++;
        }

        return mpp1 == mpp2;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>vec;
        vec.push_back(words[0]);
        for(int i=1;i<words.size();i++){
            if(!checkanagram(words[i],vec.back())){
                vec.push_back(words[i]);
            }
        }
        return vec;
    }
};