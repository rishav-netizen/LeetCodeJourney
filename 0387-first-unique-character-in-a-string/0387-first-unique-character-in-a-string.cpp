class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> H(26, 0);
        for(char c : s)
        {
            H[c - 'a']++;
        }

        for(int i = 0; i < s.size(); i++)
        {
            if (H[s[i] - 'a'] == 1) return i;
        }
        return -1;
    }
};