class Solution {
public:
    int beauty(string s)
    {
        vector<int> H(26, 0);
        for(char &c : s)
        {
            H[c - 'a']++;
        }
        int maxx = H[0], minn = INT_MAX;
        for(int i = 0; i < 26; i++)
        {
            maxx = max(H[i], maxx);
            if(H[i] > 0)
                minn = min(H[i], minn);
        } 
        return maxx - minn;
    }

    int beautySum(string s) {
        int total = 0;

        for(int i = 0, n = s.size(); i < n; ++i)
        {
            for(int j = i; j < n; ++j)
            {
                total += beauty(s.substr(i, j - i + 1));
            }
        }
        return total;
    }
};