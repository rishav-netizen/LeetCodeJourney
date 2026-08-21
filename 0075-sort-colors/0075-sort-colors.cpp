class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = nums.size();
        int zeros = 0, ones = 0, twos = 0;
        for(int i = 0; i < l; i++)
        {
            if(nums[i] == 0)
            {
                zeros++;
            }
            else if (nums[i] == 1)
            {
                ones++;
            }
        }
        twos = l - (ones + zeros);
        for(int i = 0; i < l; i++)
        {
            if (i < zeros)
                nums[i] = 0;
            else if (zeros <= i && i < zeros + ones)
                nums[i] = 1;
            else
                nums[i] = 2;
        }

    }
};