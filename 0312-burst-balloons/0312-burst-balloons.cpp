class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size();
        vector<int> a;
        a.push_back(1);
        
        for(int x : nums)
        {
            a.push_back(x);
        }
        
        a.push_back(1);
        
        vector<vector<int>> M(n + 2, vector<int>(n + 2, 0));
        for(int i = 0; i <= n; i++)
        {
            M[i][i] = 0;
        }
        for(int d = 0; d <= n; d++)
        {
            for(int i = 1; i <= n - d + 1; i++)
            {
                int j = i + d - 1;
                int value = 0;
                for(int k = i; k <= j; k++)
                {
                    value = max(value, M[i][k - 1] + M[k + 1][j] + a[i - 1]*a[k]*a[j + 1]);
                }
                M[i][j] = value;
            }
        }

        return M[1][n];
    }
};