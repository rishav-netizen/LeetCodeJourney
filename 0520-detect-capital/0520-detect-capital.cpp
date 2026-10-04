class Solution {
public:
    bool allCaps(string word)
    {
        for(char c : word)
        {
            if (!(c >= 'A' && c <= 'Z'))
            {
                return false;
            }
        }
        return true;
    }
    bool allLower(string word)
    {
        for(char c : word)
        {
            if (!(c >= 'a' && c <= 'z'))
            {
                return false;
            }
        }
        return true;
    }
    
    bool detectCapitalUse(string word) 
    {
        if (allCaps(word) or allLower(word))
        {
            return true;
        }
        return (isupper(word[0]) and allLower(word.substr(1)));
    }
};