class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle overflow case
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;

        // Use long to prevent overflow
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);
        long long result = 0;

        while (a >= b) {
            long long temp = b;
            long long multiple = 1;

            // Double the divisor until it's larger than dividend
            while (a >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }

            a -= temp;
            result += multiple;
        }

        // Determine sign
        if ((dividend < 0) ^ (divisor < 0))
            result = -result;

        return result;
    }
};
