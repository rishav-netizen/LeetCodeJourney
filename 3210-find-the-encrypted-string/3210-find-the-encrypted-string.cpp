class Solution {
public:
    string getEncryptedString(string s, int k) {
        int l = s.size();
        string result = "";
        for(int i = 0; i < l; i++)
        {
            result += s[(i + k) % l];
        }
        return result;
    }
};