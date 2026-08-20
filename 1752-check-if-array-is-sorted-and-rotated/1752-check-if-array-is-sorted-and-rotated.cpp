class Solution {
public:
    bool sorted(int *nums, int length)
    {
        int l = length;
        for (int i = 0; i < l - 1; i++)
        {
            if (nums[i] > nums[i+1])
            {
                return false;
            }
        }
        return true;
        
    }

    bool check(vector<int>& nums) {
        int l = nums.size();
        int *B = new int[l]();
        bool valid = false;

        for(int x = 0; x < l; x++)
        {
            for (int i = 0; i < l; i++)
            {
                B[i] = nums[(i+x) % l];
            }
            if (sorted(B, l))
            {
                return true;
            }
        }
        return false;
    }
};