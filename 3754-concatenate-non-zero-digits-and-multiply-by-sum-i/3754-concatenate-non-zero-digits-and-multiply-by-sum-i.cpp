class Solution {
public:
    long long sumAndMultiply(int n) 
    {
        if (n == 0)
            return 0;
        
        long long sum = 0;
        string x = "";
        string str_n = to_string(n);
        for(char digit : str_n)
        {
            if (digit - '0' != 0)
            {
                sum += digit - '0';
                x += digit;
            }
        }
        return sum * stoi(x);
    }
};