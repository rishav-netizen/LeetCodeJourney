class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, element = 0;
        for(int number : nums)
        {
            if (!count)
                element = number;
            
            if (number == element)
                count++;
            else
                count--;
        }
        return element;
    }
};