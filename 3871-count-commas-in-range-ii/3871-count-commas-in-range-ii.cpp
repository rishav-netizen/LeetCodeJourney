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

        // long long l = 0, temp = n;
        // while(temp)
        // {
        //     temp /= 10;
        //     l++;
        // }
        // long long result = 0;
        // if (l <= 3) 
        //     result = 0;

        // else if (l <= 6) 
        //     result = n - 999;
        // else if (l <= 9)
        //     result = n - 999 + commas(9) * (n - 999999);
        // else if (l <= 12)
        //     result = n - 999 + commas(9) * (n - 999999) + commas(12) * (n - 999999999);
        // else if (l <= 15)
        //     result = n - 999 + commas(9) * (n - 999999) + commas(12) * (n - 999999999) + commas(15) * (n - 999999999999);
        // else 
        //     result = n - 999 + commas(9) * (n - 999999) + commas(12) * (n - 999999999) + commas(15) * (n - 999999999999) + commas(l);



    // above idea in terms of loop!!
    long long countCommas(long long n) {
        long long result = 0;
        for (long long p = 1000; p <= n; p *= 1000)
        {
            result += n - (p - 1);
        }
        
        return result;
        
    }
};