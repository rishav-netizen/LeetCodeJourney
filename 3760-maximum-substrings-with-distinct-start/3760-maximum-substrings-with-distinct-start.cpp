class Solution {
public:
    int maxDistinct(string s) {
        vector<int> H(26, 0);
        for(char c : s)
        {
            H[c - 'a']++;
        }
        int count = 0;
        for(int c : H)
        {
            if(c > 0) count++;
        }
        return count;
    }
};