class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0)
            return false;
        double temp = n;
        while(temp > 1)
        {
            temp /= 2.0;
        }
        return temp == 1 || !(temp > 0 && temp < 1);
    }
};