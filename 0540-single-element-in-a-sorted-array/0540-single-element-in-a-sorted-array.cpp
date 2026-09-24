class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int l = 0, r = nums.size() - 1, mid;
        while (l <= r)
        {
            mid = l + (r - l)/2;
            if ((mid == 0 || nums[mid] != nums[mid - 1]) &&
                (mid == nums.size() - 1 || nums[mid] != nums[mid + 1])) 
            {
                return nums[mid];
            }
            if(mid % 2 == 0)
            {
                if(nums[mid + 1] == nums[mid]) l = mid + 2;
                else r = mid - 1;
            }
            else
            {
                if(nums[mid] == nums[mid - 1]) l = mid + 1;
                else r = mid - 1;
            }
        }
        return -1;
    }
};