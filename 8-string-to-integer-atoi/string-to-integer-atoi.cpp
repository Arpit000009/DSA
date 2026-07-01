class Solution {
public:
    int myAtoi(string s) {

        int i = 0;
        int n = s.length();

        // Skip leading spaces
        while (i < n && s[i] == ' ')
            i++;

        // If string contains only spaces
        if (i == n)
            return 0;

        // Determine sign
        int sign = 1;
        if (s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (s[i] == '+') {
            i++;
        }

        long long num = 0;

        // Read digits
        while (i < n && isdigit(s[i])) {

            int digit = s[i] - '0';

            num = num * 10 + digit;

            // Handle overflow
            if (sign == 1 && num > INT_MAX)
                return INT_MAX;

            if (sign == -1 && -num < INT_MIN)
                return INT_MIN;

            i++;
        }

        return sign * num;
    }
};