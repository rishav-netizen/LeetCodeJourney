class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size(), count = 0;
        for(char bit : s)
        {
            count += (bit - '0');
        }
        string result = "";
        if (count > 1)  
        {
            while(count - 1) 
            {
                result += '1';
                count--;
            }
            while(n - result.size() - 1) result += '0';
            result += '1';
        }
        else 
        {
            while(n - 1) 
            {
                result += '0';
                n--;
            }
            result += '1';
        }
        return result;
    }
};