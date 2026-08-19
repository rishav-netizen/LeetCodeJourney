class Solution {
public:
    bool isAnagram(string s, string t) {
        int size = 27;
        int *s_hash = new int[size]();
        int *t_hash = new int[size]();
        for (int i = 0; s[i]; i++)
        {
            s_hash[toupper(s[i]) - 'A']++;
        }
        for (int i = 0; t[i]; i++)
        {
            t_hash[toupper(t[i]) - 'A']++;
        }
        for (int i = 0; i < 27; i++)
        {
            if (s_hash[i] != t_hash[i])
            {
                return false;
            }
        }
        delete[] s_hash;
        delete[] t_hash;
        s_hash = nullptr;
        t_hash = nullptr;
        return true;
    }
};