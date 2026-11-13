class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(string operation : operations)
        {
            if (operation.find("++") != string::npos) x++;
            else x--;
        }
        return x;
    }
};