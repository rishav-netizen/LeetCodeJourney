class Solution {
public:
    int countDigits(int num) {
        int temp = num, count = 0, digit;
        while(temp)
        {
            digit = temp % 10;
            temp /= 10;
            if(num % digit == 0) count++;
        }
        return count;
    }
};