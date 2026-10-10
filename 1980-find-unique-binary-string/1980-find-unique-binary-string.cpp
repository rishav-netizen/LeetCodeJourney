class Solution {
public:
    int toDecimal(string binary)
    {
        int result = 0;
        reverse(binary.begin(), binary.end());
        for(int i = 0; i < binary.size(); i++)
        {
            result += ((binary[i] - '0') * (int)pow(2, i));
        }
        return result;
    }

    string toBinary(int decimal, int bits)
    {
        string result = "";
        while(decimal)
        {
            result = char((decimal % 2) + '0') + result;
            decimal /= 2;
        }
        if (result.size() != bits) 
        {
            for(int i = 0; i < result.size() - bits; i++)
            {
                result = '0' + result;
            }
        }
        return result;
    }

    string findDifferentBinaryString(vector<string>& nums) {
        int bits = nums[0].size();
        int size = (int)pow(2, bits);
        vector<int> H(size, 0);

        for(string bin : nums)
        {
            H[toDecimal(bin)]++;
        }
        int result;
        for(int i = 0; i < size; i++)
        {
            if (H[i] == 0)
            {
                result = i;
                break;
            }
        }

        return toBinary(result, bits);
    }
};