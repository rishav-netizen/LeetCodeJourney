class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int l = nums.size(), thatNum = 0;
        for(int i = 0; i < l; i++)
        {
            thatNum ^= nums[i];
        }
        return thatNum;
        
    }
};