class Solution {
public:
    bool isPalindromic(int n, int base)
    {
        string result = "";
        while(n)
        {
            result = char((n % base) + '0') + result;
            n /= base;
        }
        return equal(result.begin(), result.end(), result.rbegin());
    }

    bool isStrictlyPalindromic(int n) {
        for(int base = 2; base <= n - 2; ++base)
        {
            if(!isPalindromic(n, base)) return false;
        }
        return true;
    }
};