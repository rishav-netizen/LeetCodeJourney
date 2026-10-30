class Solution {
public:
    string longestPalindrome(string s) 
    {
        int res_l, maxlen = 0, l, r;
        for(int i = 0, n = s.size(); i < n; i++) 
        {
            l = i;
            r = i;
            while(l >= 0 && r < n && s[l] == s[r])
            {
                if(maxlen < r - l + 1)
                {
                    maxlen = r - l + 1;
                    res_l = l;
                }
                l--;
                r++;
            }

            l = i;
            r = i + 1;
            while(l >= 0 && r < n && s[l] == s[r])
            {
                if(maxlen < r - l + 1)
                {
                    maxlen = r - l + 1;
                    res_l = l;
                }
                l--;
                r++;
            }
        }
        return s.substr(res_l, maxlen);
    }
};