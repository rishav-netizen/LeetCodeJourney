class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i = 0, l = s.size(); i < l/2; i++)
        {
            swap(s[i], s[l - i - 1]);
        }
    }
};