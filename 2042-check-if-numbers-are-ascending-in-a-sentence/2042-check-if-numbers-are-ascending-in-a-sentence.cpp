class Solution {
public:
    bool isdigit(char c)
    {
        return c <= '9' and c >= '0';
    }

    bool areNumbersAscending(string s) {
        int prev = 0, current, i = 0;
        while (i < s.size())
        {
            if (isdigit(s[i]))
            {
                string str_number = "";
                while(i < s.size() && isdigit(s[i]))
                {
                    str_number += s[i];
                    i++;
                }
                current = stoi(str_number);

                if (current <= prev)
                {
                    return false;
                }
                prev = current;
            }

            else
            {
                i++;
            }
            
        }
        return true;
    }
};