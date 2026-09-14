class Solution {
public:
    int binarySearch(vector<int>& nums, int target, int l, bool first)
    {
        int h = nums.size() - 1;
        int ans = -1;
        while(l <= h)
        {
            int mid = (l + h) / 2;
            if(nums[mid] == target)
            {
                ans = mid;
                if (first) h = mid - 1;
                else l = mid + 1;
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
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> result;
        if (nums.empty()) return {-1, -1};
        int first_occ = binarySearch(nums, target, 0, true);
        if (first_occ == -1) return {-1, -1};
        else
        {
            result.push_back(first_occ);
            result.push_back(binarySearch(nums, target, 0, false));
        }
        // sort(result.begin(), result.end());
        return result;
    }
};