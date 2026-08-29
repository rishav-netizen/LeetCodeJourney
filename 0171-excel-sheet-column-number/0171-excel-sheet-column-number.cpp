class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for (int i = columnTitle.size() - 1, p = 0; i >= 0; i--, p++)
        {
            result += (int)(columnTitle[i] - 'A' + 1) * (int)pow(26, p);
        }
        return result;
    }
};