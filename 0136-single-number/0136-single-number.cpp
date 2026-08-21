class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int thatNum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            thatNum ^= nums[i];
        }
        return thatNum;
        
    }
};