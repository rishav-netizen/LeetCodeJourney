class Solution {
public:
    bool isPalindrome(string s) {
        string req = "";
        for(char each : s)
        {
            if (isalpha(each) || isdigit(each))
            {
                req += tolower(each);
            }
        }
        string rev = req;
        reverse(rev.begin(), rev.end());
        return rev == req;
    }
};