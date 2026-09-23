class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> H(26, 0);

        for(char letter: magazine)
        {
            H[letter - 'a']++;
        }
        
        for(char letter : ransomNote)
        {
            H[letter - 'a']--;
        }

        for(int count : H)
        {
            if(count < 0) return false;
        }

        return true;
    }
};