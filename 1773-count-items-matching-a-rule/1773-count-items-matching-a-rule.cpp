class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        int key = 0;

        if (ruleKey == "color") key = 1;
        else if (ruleKey == "name") key = 2;

        for(const auto& each : items)
        {
            count += (each[key] == ruleValue);
        }

        return count;
    }
};