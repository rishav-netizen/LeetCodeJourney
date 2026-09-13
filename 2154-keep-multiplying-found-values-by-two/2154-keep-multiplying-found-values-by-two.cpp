class Solution {
public:
    bool in(vector<int>& nums, int original)
    {
        for(int i = 0; i < nums.size(); i++)
        {
            if (original == nums[i]) return true;
        }
        return false;
    }

    int findFinalValue(vector<int>& nums, int original) {
        for(int i = 0; i < nums.size(); i++)
        {
            while (in(nums, original))
            {
                original *= 2;        
            }
        }
        return original;
    }
};