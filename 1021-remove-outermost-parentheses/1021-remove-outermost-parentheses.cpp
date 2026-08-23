class Solution {
public:
    string removeOuterParentheses(string s) {
       int pair = 0;
       string res = "";
       for(int i = 0; s[i]; i++)
       {
            if(s[i] == '(')
            {
                if (pair > 0)
                    res.push_back(s[i]);
                pair++;
            }
            else if (s[i] == ')')
            {
                pair--;
                if(pair > 0)
                    res.push_back(s[i]);
            }
       }
       return res;
    }
};