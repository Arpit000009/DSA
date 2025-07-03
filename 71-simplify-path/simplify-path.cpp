class Solution {
public:
    string simplifyPath(string path) {
        vector<string>vec;
        stringstream ss(path);
        char ch = '/';
        string str;

        while(getline(ss,str,ch)){
            vec.push_back(str);
        }

        stack<string>st;
        for(int i=0;i<vec.size();i++){
            if(vec[i] == ".." && !st.empty()){
                st.pop();
            }
            else if(vec[i]!="" && vec[i]!="." && vec[i]!=".."){
                st.push(vec[i]);
            }
        }
        string ans = "";
        while(!st.empty()){
            ans = st.top() + ans;
            ans = "/"+ans;
            st.pop();
        }
        if(ans == ""){
            ans = "/";
        }
        return ans;
    }
};