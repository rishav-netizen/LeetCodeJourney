class Solution {
public:
    int pos(vector<int> &arr, int element)
    {
        for(int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == element) return i;
        }
        return -1;
    }
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> P, result;
        for(int i = 1; i <= m; i++)
        {
            P.push_back(i);
        }
        for(int i = 0; i < queries.size(); ++i)
        {
            int position = pos(P, queries[i]);
            rotate(P.begin(), P.begin() + position, P.begin() + position + 1);
            result.push_back(position);
        }
        return result;
    }
};