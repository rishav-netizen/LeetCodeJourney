class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = nums.size();
        int k = 0;
        for(int i = 0; i < l; i++)
        {
            if (nums[i] != 0)
            {
                nums[k++] = nums[i];
            }
        }
        for(int i = k; i < l; i++)
        {
            nums[i] = 0;
        }
    }
};