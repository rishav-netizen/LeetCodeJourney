class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) { 
        for(vector<int> &row : image)
        {
            reverse(row.begin(), row.end());
            for(int &bit : row)
            {
                bit = (bit) ? 0 : 1;
            }
        }
        return image;
    }
};