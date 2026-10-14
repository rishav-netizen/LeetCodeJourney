class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int max_idx = 0, min_idx = 0;
        int maximum = nums[0], minimum = nums[0], n = nums.size();
        if(n <= 1) return n;
        for(int i = 0; i < n; i++)
        {
            if (nums[i] > maximum) 
            {
                maximum = nums[i];
                max_idx = i;
            }
            else if (nums[i] < minimum)
            {
                minimum = nums[i];
                min_idx = i;
            }
        } 

        int before = min(min_idx, max_idx), after = max(min_idx, max_idx);

        int front = after + 1;
        int back = n - before;
        int both = before + 1 + n - after;
        
        return min({front, back, both});
    }
};