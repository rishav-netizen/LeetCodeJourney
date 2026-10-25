class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int current_sum = 0, max_sum = INT_MIN;
        for(int i = 0, n = nums.size(); i < n/2; i++)
        {
            current_sum = nums[i] + nums[n - i - 1];
            max_sum = max(current_sum, max_sum);
        }
        return max_sum;
    }
};