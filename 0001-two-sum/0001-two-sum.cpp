class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result = {};
        for(int i = 0, l = nums.size(); i < l; i++)
        {
            for(int j = i + 1; j < l; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    if (find(result.begin(), result.end(), i) == result.end())
                    {
                        result.push_back(i);
                    }
                    if (find(result.begin(), result.end(), j) == result.end())
                        result.push_back(j);
                    break;
                }
            }
        }
        return result;
    }
};