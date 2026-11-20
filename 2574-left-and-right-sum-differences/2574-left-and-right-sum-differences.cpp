class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) 
    {
        vector<int> leftSum;    
        vector<int> rightSum;
        int n = nums.size();
        for(int i = 0, total = 0; i < n; ++i)
        {
            leftSum.push_back(total);
            total += nums[i];
        }

        for(int i = n - 1, total = 0; i >= 0; --i)
        {
            rightSum.push_back(total);
            total += nums[i];
        }
        reverse(rightSum.begin(), rightSum.end());

        for(int i = 0; i < n; i++)
        {
            nums[i] = abs(rightSum[i] - leftSum[i]);
        }
        return nums;
    }
};