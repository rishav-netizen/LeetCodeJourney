class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total = 1, zeroCount = 0;

        for(int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 0) zeroCount++;
            if (nums[i] != 0) total *= nums[i];
        }

        for(int& curr : nums)
        {
            if (curr == 0)
            {
                if(zeroCount > 1) curr = 0;
                else curr = total;
            }
            else
            {
                if (zeroCount != 0) curr = 0;
                else curr = total/curr;
            }
        }
        
        return nums;
    }
};