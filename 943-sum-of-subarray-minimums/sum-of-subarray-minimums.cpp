class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();

        vector<int> nsl;
        nsl.push_back(-1);

        stack<int> st;
        st.push(0);

        // NSL
        for (int i = 1; i < n; i++) {

            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            if (st.empty()) {
                nsl.push_back(-1);
            } else {
                nsl.push_back(st.top());
            }

            st.push(i);
        }

        // NSR
        vector<int> nsr(n);
        nsr[n - 1] = n;

        stack<int> st2;
        st2.push(n - 1);

        for (int i = n - 2; i >= 0; i--) {

            while (!st2.empty() && arr[st2.top()] > arr[i]) {
                st2.pop();
            }

            if (st2.empty()) {
                nsr[i] = n;
            } else {
                nsr[i] = st2.top();
            }

            st2.push(i);
        }

        const long long MOD = 1000000007;
        long long sum = 0;

        for (int x = 0; x < n; x++) {
            long long left = x - nsl[x];
            long long right = nsr[x] - x;

            long long count = left * right * arr[x];

            sum = (sum + count) % MOD;
        }

        return sum;
    }
};