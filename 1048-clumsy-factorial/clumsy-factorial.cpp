class Solution {
public:
    int clumsy(int n) {
        int op = 0;
        
        stack<int>st;
        st.push(n);
        for(int i=n-1;i>0;i--){
            if(op==0){
                int x = st.top();
                st.pop();
                st.push(x*i);
            }
            else if(op == 1){
                int x = st.top();
                st.pop();
                st.push(x/i);
            }
            else if(op == 2){
                st.push(i);
            }
            else{
                st.push(i*(-1));
            }
            op = (op+1)%4;
        }
        int ans = 0;
        while(!st.empty()){
            ans = ans+st.top();
            st.pop();
        }
        return ans;
    }
};