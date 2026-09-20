class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector <int> H(26, 0);
        for(char letter : sentence)
        {
            H[letter - 'a']++;
        }

        for(int count : H)
        {
            if(count == 0) return false;
        }
        return true;
    }
};