class Solution {
public:
    int digitSum(int n)
    {
        int s = 0;
        while(n)
        {
            s += n % 10;
            n /= 10;
        }
        return s;
    }
    int addDigits(int num) {
        int val = num;
        while(val >= 10)
        {
            val = digitSum(val);
        }
        return val;
    }
};