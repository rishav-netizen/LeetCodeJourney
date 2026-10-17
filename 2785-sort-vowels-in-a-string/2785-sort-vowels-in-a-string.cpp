class Solution {
public:
    bool isVowel(char c)
    {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            return true;
        }
        return false;
    }
    string sortVowels(string s) {
        vector<char> vowels;

        for(int i = 0; i < s.size(); i++)
        {
            if(isVowel(s[i]))
            {
                vowels.push_back(s[i]);
            }
        }
        sort(vowels.begin(), vowels.end());

        int j = 0;
        for(char &c : s)
        {
            if(isVowel(c))
            {
                c = vowels[j++];
            }
        }

        return s;
    }
};