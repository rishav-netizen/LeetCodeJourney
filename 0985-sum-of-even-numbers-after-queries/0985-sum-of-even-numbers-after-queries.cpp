class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) 
    {
        vector<int> answer;
        int even_sum = 0;
        for(int i = 0; i < queries.size(); i++)
        {
            nums[queries[i][1]] += queries[i][0];
            even_sum = 0;
            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[j] % 2 == 0) even_sum += nums[j];
            }
            answer.push_back(even_sum);
        }
        return answer;
    }
};