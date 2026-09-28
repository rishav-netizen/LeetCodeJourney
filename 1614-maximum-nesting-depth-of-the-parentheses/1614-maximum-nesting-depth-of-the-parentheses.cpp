class Solution {
public:
    int maxDepth(string s) {
        int d = 0, max_d = 0;
        for(char c : s)
        {
            if (c == '(')
            {
                d++;
                max_d = max(d, max_d);
            } 
            else if (c == ')')
            {
                d--;
            }  
        }
        return max_d;
    }
};