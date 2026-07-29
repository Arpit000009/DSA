class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size()-1;
        int j = b.size()-1;
        int carry = 0;
        int sum = 0;
        string ans;
        while(i>=0 || j>=0){
            sum = 0;
            if(i>=0) sum = sum+ (a[i--]-'0');
            if(j>=0) sum = sum + (b[j--]-'0');
            sum = sum + carry;
            int m = sum%2;
            carry = sum/2;
            ans = ans + char(m +'0');

        }
        if(carry)
        ans = ans + char(carry + '0');
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};