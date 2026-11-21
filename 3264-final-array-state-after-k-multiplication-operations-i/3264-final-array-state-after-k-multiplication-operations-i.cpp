class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i = 0; i < k; i++)
        {
            auto min_idx = min_element(nums.begin(), nums.end());
            *min_idx = (*min_idx) * multiplier;
        }
        return nums;
    }
};