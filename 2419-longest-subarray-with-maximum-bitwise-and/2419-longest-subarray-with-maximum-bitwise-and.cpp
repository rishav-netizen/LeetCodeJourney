class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxVal = *max_element(nums.begin(), nums.end());
        int count = 0, max_count = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == maxVal)
            {
                count++;
                max_count = max(count, max_count);
            }
            else
            {
                count = 0;
            }
        }
        return max_count;
    }
};