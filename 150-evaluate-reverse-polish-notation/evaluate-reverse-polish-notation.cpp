class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;

        for(int i=0;i<tokens.size();i++){
            string s = tokens[i];
            bool isInt = !s.empty() &&
             (isdigit(s[0]) || (s[0] == '-' && s.size() > 1));
            if(isInt){
                st.push(stoi(tokens[i]));
            }
            if(tokens[i]=="+"){
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                st.push(num2+num1);
            }
            if(tokens[i]=="-"){
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                st.push(num2-num1);
            }
            if(tokens[i]=="/"){
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                st.push(num2/num1);
            }
            if(tokens[i]=="*"){
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                st.push(num2*num1);
            }
        
        }

        int result = st.top();
        return result;
    }
};