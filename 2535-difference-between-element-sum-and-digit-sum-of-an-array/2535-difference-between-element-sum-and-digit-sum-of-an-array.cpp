class Solution {
public:
    int digitSum(int num)
    {
        int total = 0;
        while(num)
        {
            total += num % 10;
            num /= 10;
        }
        return total;
    }
    int differenceOfSum(vector<int>& nums) {
        int element_sum = accumulate(nums.begin(), nums.end(), 0);
        int digit_sum = 0;
        for(int num : nums)
        {
            digit_sum += digitSum(num);
        }
        return abs(element_sum - digit_sum);
    }
};