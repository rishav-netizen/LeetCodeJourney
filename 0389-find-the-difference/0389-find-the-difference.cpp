class Solution {
public:
    char findTheDifference(string s, string t) {
       vector<int> H(26, 0);
       for(char c : t)
       {
            H[c - 'a']++;
       }
       for(char c : s)
       {
            H[c - 'a']--;
       }
       for(int i = 0; i < 26; i++)
       {
            if (H[i] == 1) return i+'a';
       }
       return ' ';
    }
};