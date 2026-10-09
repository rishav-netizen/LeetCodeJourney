class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
       int current_time = customers[0][0];
       long waiting_time = 0;
        for(int i = 0, n = customers.size(); i < n; i++)
        {
            if(customers[i][0] > current_time) 
            {
                current_time = customers[i][0];
            }
            current_time += customers[i][1];
            waiting_time += current_time - customers[i][0];
        }
        return (double)(waiting_time)/(double)(customers.size());
    }
};