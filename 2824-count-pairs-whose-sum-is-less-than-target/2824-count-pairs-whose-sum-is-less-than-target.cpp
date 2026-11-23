class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        for(int i = 0, n = nums.size(); i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                count += (nums[i] + nums[j] < target);
            }
        }
        return count;
    }
};