class Solution {
public:

    static bool compare(int a, int b)
    {
        return to_string(a) + to_string(b) > to_string(b) + to_string(a);
    }

    string largestNumber(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end(), compare);

        string result = "";

        for(int i = 0; i < nums.size(); i++)
        {
            // if (!(nums[i] == 0))
            result += to_string(nums[i]);
            // if(stol(result) == 0)
            //     return "0";
        }

        while (result[0]=='0' && result.length()!=1) result.erase(0,1);
        
        return result;
    }
};