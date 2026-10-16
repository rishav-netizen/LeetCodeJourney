class Solution {
public:
    string maskPII(string s) {
        bool email = false;
        int index = 0;
        if ((index = s.find('@')) != string::npos)
        {
            email = true;
        }
        string result = "";
        if(email)
        {
            result += tolower(s[0]);
            result += "*****";
            for(int i = index - 1, n = s.size(); i < n; i++)
            {
                result += tolower(s[i]);
            }
        }
        else
        {
            string numbers = "";
            for(char digit : s)
            {
                if ('0' <= digit && digit <= '9')
                {
                    numbers += digit;
                }
            }
            int code_digits = numbers.size() - 10;
            if (code_digits > 0)
            {
                result += '+';
                for(int i = 0; i < code_digits; i++) result += '*';
                result += '-';
            }
            result += "***-***-";
            for (int i = numbers.size() - 4; i < numbers.size(); i++)
            {
                result += numbers[i];
            }
        }
        return result;
    }
};