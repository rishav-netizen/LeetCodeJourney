class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> x;
        vector<int> y;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(matrix[i][j] == 0)
                {
                    x.push_back(i);
                    y.push_back(j);
                }
            }
        }

        for(int index : x)
        {
            for(int i = 0; i < n; i++)
            {
                matrix[index][i] = 0;
            }
        }
        for(int index : y)
        {
            for(int i = 0; i < m; i++)
            {
                matrix[i][index] = 0;
            }
        }
    }
};