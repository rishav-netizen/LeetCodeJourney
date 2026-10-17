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
        string t = s;
        vector<char> vowels;
        vector<int> indices;

        for(int i = 0; i < s.size(); i++)
        {
            if(isVowel(s[i]))
            {
                vowels.push_back(s[i]);
                indices.push_back(i);
            }
        }
        sort(vowels.begin(), vowels.end());

        for(int i = 0, n = indices.size(); i < n; i++)
        {
            t[indices[i]] = vowels[i];
        }

        return t;
    }
};