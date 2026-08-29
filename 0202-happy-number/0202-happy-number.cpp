class Solution {
public:
    int calculate(int n)
    {
        int temp = n, result = 0;
        while (temp)
        {
            result += (temp % 10)*(temp % 10);
            temp /= 10;
        }
        return result;
    }

    bool isHappy(int n) {
        int value = n;
        vector<int> H;
        while (true)
        {
            value = calculate(value);
            if (value == 1)
            {
                return true;
            }
            else if (find(H.begin(), H.end(), value) != H.end())
            {
                return false;
            }
            H.push_back(value);
        }
    }
};