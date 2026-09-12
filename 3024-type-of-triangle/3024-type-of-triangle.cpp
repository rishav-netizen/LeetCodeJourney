class Solution {
public:
    bool isValid(vector<int>& nums)
    {
        return (nums[0] + nums[1] > nums[2]) && (nums[0] + nums[2] > nums[1]) && (nums[2] + nums[1] > nums[0]);
    }

    string triangleType(vector<int>& nums) 
    {
        if(!isValid(nums)) return "none";
        
        if(nums[0] == nums[1] && nums[1] == nums[2] && nums[0] == nums[2]) return "equilateral";

        else if (nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2]) return "isosceles";

        else return "scalene";
    }
};