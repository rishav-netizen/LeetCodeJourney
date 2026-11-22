class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> result;
        for(int i = 1; i < nums.size(); ++i)
        {
            if (result.size() == 2) break;
            if(nums[i] == nums[i - 1])
            {
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};