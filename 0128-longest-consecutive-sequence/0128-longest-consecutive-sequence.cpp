class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int count = 0, current, next, longest = 0;
        for(int i = 0; i < nums.size() - 1; i++)
        {
            current = nums[i];
            next = nums[i + 1];
            if (next - current == 1) 
            {
                count++;
                longest = max(longest, count);
            }
            else if (next == current)
            {
                continue;
            }
            else
            {
                count = 0;
            }
        }
        return longest + 1;
    }
};