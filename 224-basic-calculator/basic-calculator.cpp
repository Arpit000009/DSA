class Solution {
public:
    int calculate(string s) {
        long long ans = 0;
        long long num = 0;
        int sign = 1;

        stack<long long> st;

        for (int i = 0; i < s.size(); i++) {

            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }

            else if (s[i] == '+') {
                ans += num * sign;
                num = 0;
                sign = 1;
            }

            else if (s[i] == '-') {
                ans += num * sign;
                num = 0;
                sign = -1;
            }

            else if (s[i] == '(') {
                st.push(ans);
                st.push(sign);

                ans = 0;
                sign = 1;
                num = 0;
            }

            else if (s[i] == ')') {
                ans += num * sign;
                num = 0;

                long long st_sign = st.top();
                st.pop();

                long long st_result = st.top();
                st.pop();

                ans = st_result + (st_sign * ans);
                sign = 1;
            }
        }

        ans += num * sign;

        return (int)ans;
    }
};