class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty())
            return 0;
        int n = nums.size();
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            if(nums[i - 1] != nums[i])
            {
                nums[count] = nums[i];
                count++;
            }
        }
        return count;
    }
};