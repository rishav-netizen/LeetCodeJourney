class Solution {
public:
    bool isVowel(char c)
    {
        c = tolower(c);
        for(char vowel : {'a', 'e', 'i', 'o', 'u'})
        {
            if (c == vowel) return true;
        }
        return false;
    }

    bool alphaNumeric(string word)
    {   
        for(char c : word)
        {
            if(!isalnum(c)) return false;
        }
        return true;
    }

    bool isValid(string word) {
        if (word.size() < 3) return false;
        if (!alphaNumeric(word)) return false;

        int vowel_count = 0;
        int consonant_count = 0;

        for(char c : word)
        {
            if (isVowel(c)) vowel_count++;
            else if (!isdigit(c)) consonant_count++;
        }
        return (vowel_count > 0) and (consonant_count > 0);

    }
};