class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int not_present = INT_MAX; 
        // if (nums.size() == 1 && nums[0] == k)
        //     return 2 * k;
        for(int i = 1; i <= nums.size() + 1; i++)
        {
            if(find(nums.begin(), nums.end(), k * i) == nums.end())
            {
                not_present = min(not_present, k * i);
            }
        }
        return not_present;
    }
};