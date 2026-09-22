class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(string each : details)
        {
            int age = (each[11] - '0') * 10 + (each[12] - '0');
            if(age > 60) count++;
        }
        return count;
    }
};