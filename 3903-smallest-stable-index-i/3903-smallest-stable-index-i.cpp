class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size(), instability = 0;
        for(int i = 0; i < n; i++)
        {
            instability = *max_element(nums.begin(), nums.begin() + i + 1) - *min_element(nums.begin() + i, nums.end());
            if(instability <= k)
                return i;
        }
        return -1;
    }
};