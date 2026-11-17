class Solution {
public:
    bool isVowel(char c)
    {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

    int maxFreqSum(string s)
    {
        vector<int> freq(26, 0);
        for(char c : s)
        {
            freq[c - 'a']++;
        }
        int max_vow = 0, max_con = 0;
        for(char c : s)
        {
            if(isVowel(c)) max_vow = max(max_vow, freq[c - 'a']);
            else max_con = max(max_con, freq[c - 'a']);
        }   
        return max_vow + max_con;

    }
};