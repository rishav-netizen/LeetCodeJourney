class Solution {
public:
    string invert(string s)
    {
        for(char &c : s)
        {
            c = (c == '0') ? '1' : '0';
        }
        return s;
    }

    string S(int n)
    {
        if (n == 1) return "0";
        
        string prev = S(n-1);
        string inv = invert(prev);
        reverse(inv.begin(), inv.end());
        return prev + "1" + inv;
    }

    char findKthBit(int n, int k) 
    {
        return S(n)[k - 1];
    }
};