class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0")
            return "0";

        int m = num1.size();
        int n = num2.size();

        vector<int>vec(m+n,0);

        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int mul = (num1[i] - '0') * (num2[j]-'0');

                int p1 = i+j+1;
                int p2 = i+j;

                int sum = mul + vec[p1];
                vec[p1] = sum%10;
                vec[p2] = vec[p2] + sum/10;  
            }
        }
        string ans = "";

        int flag = 0;

        for(int i=0;i<vec.size();i++){
            if(vec[i]!=0 && flag==0){
                flag = 1;
            }
            if(flag ==1){
                ans = ans + char(vec[i] + '0');
            }
        }
        return ans;
    }
};