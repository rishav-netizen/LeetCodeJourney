class Solution {
public:
    int binarySearch(vector<int>& nums, int target)
    {
        int l = 0, h = nums.size() - 1;
        while(l <= h)
        {
            int mid = (l + h) / 2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
        return -1;
    }

    int searchInsert(vector<int>& nums, int target) 
    {
        int index = binarySearch(nums, target);
        if (index != -1) return index;
        int i = 0;
        while((i < nums.size()) && (nums[i] < target))
        {
            i++;
        }
        return i;
    }   
};