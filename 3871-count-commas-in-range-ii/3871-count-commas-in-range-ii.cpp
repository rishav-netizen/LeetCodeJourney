class Solution {
public:
    // int commas(int l)
    // {
    //     int multiplier = 0;
    //     if (l % 3 == 0) 
    //         multiplier = (l / 3) - 1;
    //     else 
    //         multiplier = l / 3;
    //     return multiplier;
    // }

    long long countCommas(long long n) 
    {
        long long result = 0;
        for (long long p = 1000; p <= n; p *= 1000)
        {
            result += n - (p - 1);
        }

        return result;
        
    }
};