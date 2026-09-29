class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        long c1, c2, f1 = 0, f2 = 0;
        vector<int> result;
        for(int num : nums)
        {
            if(num == c1)
            {
                f1++;
            }
            else if (num == c2)
            {
                f2++;
            }
            
            else if (f1 == 0)
            {
                c1 = num;
                f1 = 1;
            } 
            else if (f2 == 0) 
            {
                c2 = num;
                f2 = 1;
            }
            else
            {
                f1--;
                f2--;
            }   
        }
        f1 = 0;
        f2 = 0;
        for(int num : nums)
        {
            if(num == c1) f1++;
            else if (num == c2) f2++;
        }
        
        if (f1 > nums.size() / 3) 
            result.push_back(c1);
        if (f2 > nums.size() / 3)
            result.push_back(c2);
        return result;
    }
};