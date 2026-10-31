class Solution {
public:
    bool isBalanced(string num) {
        int value = 0;
        for(int i = 0; i < num.size(); ++i)
        {
            if (i % 2 == 0)
                value += (num[i] - '0');
            else
                value -= (num[i] - '0');
        }
        return value == 0;
    }
};