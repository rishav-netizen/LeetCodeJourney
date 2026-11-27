class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) 
    {
        vector<int> map(order.size() + 1, 0);
        for(const int& each : friends)
        {
            map[each]++;
        }

        vector<int> res;
        for(const int& each : order)
        {
            if(map[each]) 
            {
                res.push_back(each);
            }
        }

        return res;

        
    }
};