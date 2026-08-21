class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, maxCount = 0, l = nums.size();
        for(int i = 0; i < l; i++)
        {
            if(nums[i] == 1)
            {
                count++;
            }
            else
            {
                count = 0;
            }
            maxCount = maxCount > count ? maxCount : count;
        }
        return maxCount;
    }
};