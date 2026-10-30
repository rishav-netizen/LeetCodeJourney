class Solution {
public:
    int beautySum(string s) {
        int total = 0;

        for(int i = 0, n = s.size(); i < n; ++i)
        {
            vector<int> H(26, 0);
            for(int j = i; j < n; ++j)
            {
                H[s[j] - 'a']++;
                int maxx = 0, minn = INT_MAX;
                for(int k = 0; k < 26; k++)
                {
                    if(H[k] > 0)
                    {
                        maxx = max(maxx, H[k]);
                        minn = min(minn, H[k]);
                    }
                }
                total += maxx - minn;
            }
        }
        return total;
    }
};