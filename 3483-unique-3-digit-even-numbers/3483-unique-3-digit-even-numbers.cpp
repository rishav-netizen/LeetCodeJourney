class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int count = 0;
        set<int> s;
        for(int i = 0, l = digits.size(); i < l; i++)
        {
            for(int j = 0; j < l; j++)
            {
                for(int k = 0; k < l; k++)
                {
                    if (i == j || j == k || i == k) continue;
                    if (digits[i] == 0) continue;
                    if (digits[k] % 2 != 0) continue;

                    s.insert(100 * digits[i] + 10 * digits[j] + digits[k]);
                    count++;
                }
            }
        }
        return s.size();
    }
};