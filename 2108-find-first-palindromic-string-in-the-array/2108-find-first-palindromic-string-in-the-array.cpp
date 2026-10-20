class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string& word : words)
        {
            if (equal(word.begin(), word.end(), word.rbegin())) return word;
        }
        return "";
    }
};