class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count = 0;
        map<char, int> freq;
        for(char letter : word)
        {
            freq[letter]++;
        }
        for(char c = 'a'; c <= 'z'; c++)
        {
            if (freq[c] > 0 && freq[toupper(c)] > 0)
            {
                count++;
            }
        }
        return count;
    }
};