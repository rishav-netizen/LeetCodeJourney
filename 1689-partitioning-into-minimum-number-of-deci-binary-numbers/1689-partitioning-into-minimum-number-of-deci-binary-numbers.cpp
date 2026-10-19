class Solution {
public:
    int minPartitions(string n) {
        int res = 0, digit;
        for(char c : n)
        {
            digit = c - '0';
            res = max(digit, res);
        } 
        return res;
    }
};