class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int totalpoints = 0;
        if(x>y){
            totalpoints += removepair(s,'a','b',x);
            totalpoints += removepair(s,'b','a',y);
        }
        else{
            totalpoints += removepair(s,'b','a',y);
            totalpoints += removepair(s,'a','b',x);
        }
        return totalpoints;
    }

    int removepair(string &s,int first,int second,int gain){
        string stack;
        int points = 0;
        for(char ch:s){
            if(!stack.empty()&&stack.back()==first && ch==second){
                stack.pop_back();
                points += gain;
            }
            else{
                stack.push_back(ch);
            }
        }
        s=stack;
        return points;
    }
};