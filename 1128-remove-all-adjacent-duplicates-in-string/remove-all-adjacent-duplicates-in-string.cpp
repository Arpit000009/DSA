class Solution {
public:
    string removeDuplicates(string s) {
        if(s.size()==0 || s.size()==1){
            return s;
        }
        stack<char>st;
        st.push(s[0]);

        for(int i=1;i<s.size();i++){
            if(!st.empty() && st.top()==s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string ans = "";
        while(!st.empty()){
            ans = st.top()+ans;
            st.pop();
        }
        return ans;
    }
};