class Solution {
public:
    long long reverse(long long n) {
    long long x = 0, reversed = 0;
    if (n < 0)
        x = -n;
    else 
        x = n;

    int digit;
    while (x)
    {
        digit = (x % 10);
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    if ((reversed > INT_MAX) || (reversed < INT_MIN) )
        return 0;
    if (n < 0)
        return -reversed;
    else 
        return reversed;

    }
};