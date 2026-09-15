class Solution {
public:
    int percentageLetter(string s, char letter) {
        double count = 0;
        for(char c : s)
        {
            if (c == letter) count++;
        }
        return (count * 100) / s.size();
        
    }
};