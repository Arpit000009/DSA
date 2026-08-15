class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0;

        for(int i=0;i<k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                count++;
            }
        }

        int start = 0;
        int end = k;
        int maxcount = count;
        while(end<s.size()){
            if(s[start]=='a'||s[start]=='e'||s[start]=='i'||s[start]=='o'||s[start]=='u'){
                count--;
            }
            if(s[end]=='a'||s[end]=='e'||s[end]=='i'||s[end]=='o'||s[end]=='u'){
                count++;
            }

            if(count>maxcount){
                maxcount = count;
            }
            start++;
            end++;
        }
        return maxcount;
    }
};