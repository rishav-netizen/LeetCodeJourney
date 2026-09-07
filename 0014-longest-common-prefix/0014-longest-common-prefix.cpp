class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";
        
        sort(strs.begin(), strs.end());

        string first = strs[0], last = strs[strs.size() - 1], result = "";

        int smallest = min(first.size(), last.size());

        for(int i = 0; i < smallest; i++)
        {
            if(first[i] != last [i])
                break;
            result += first[i];
        }
        return result;
    }
};