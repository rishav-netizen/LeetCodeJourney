class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0, sum = 0;
        vector<int> pre(nums.size(), 0);
        pre[0] = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            pre[i] += pre[i - 1] + nums[i];
        }

        // O(n^2)
        // for(int i = 0; i < nums.size(); i++)
        // {
        //     for(int j = i; j < nums.size(); j++)
        //     {
        //         if (i == 0)
        //             sum = pre[j];
        //         else
        //             sum = pre[j] - pre[i - 1];
                
        //         if (sum == k)
        //             count++;
        //     }
        // }

        unordered_map<int, int> H;
        H[0] = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            sum = pre[i];
            if (H[sum - k] > 0)
                count += H[sum - k];
            H[sum]++;
        }
        return count;
    }
};