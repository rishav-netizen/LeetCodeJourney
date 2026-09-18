class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int total = 0;
        for(vector<int> each : accounts)
        {
            total = max(accumulate(each.begin(), each.end(), 0), total);
        }
        return total;
    }
};