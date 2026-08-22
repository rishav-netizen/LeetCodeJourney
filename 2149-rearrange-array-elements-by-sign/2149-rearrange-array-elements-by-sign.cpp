class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int l = nums.size();
        vector<int> P;
        vector<int> N;
        for(int i = 0; i < l; i++)
        {
            if(nums[i] < 0)
                N.push_back(nums[i]);
            else
                P.push_back(nums[i]);
        }
        int p = 0, n = 0;
        for(int i = 0; i < l; i++)
        {
            if(i % 2 == 0)
                nums[i] = P[p++];
            else 
                nums[i] = N[n++];
        }
        return nums;
    }
};