class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n + 1, 0);

        for(int each : nums)
        {
            freq[each]++;
        }

        int max_rows = *max_element(freq.begin(), freq.end());

        vector<vector<int>> result(max_rows);

        for(int i = 1; i <= n; ++i)
        {
            for(int j = 0; j < freq[i]; ++j)
            {
                result[j].push_back(i);
            }
        }
        
        return result;
    }
};