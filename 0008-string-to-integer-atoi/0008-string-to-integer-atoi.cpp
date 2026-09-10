class Solution {
public:
    bool isDigit(char c)
    {
        return ('0' <= c && c <= '9');
    }

    int myAtoi(string s) {
        long long result = 0;
        int sign = 1;
        int i = 0;

        while(i < s.length() && s[i] == ' ')
            i++;
        
        if(i < s.length() && (s[i] == '+' || s[i] == '-'))
        {
            if(s[i] == '-')
                sign = -1;
            i++;
        }

        while(i < s.length() && isDigit(s[i]))
        {
            int digit = s[i] - '0';
            if(result <= (LONG_MAX - digit) / 10)
                result = result * 10 + digit;
            i++;
        }

        result = result * sign;

        if (result > INT_MAX) return INT_MAX;
        if (result < INT_MIN) return INT_MIN;

        return result;
    }
};