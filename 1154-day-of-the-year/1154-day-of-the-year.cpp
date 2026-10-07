class Solution {
public:
    bool isLeapYear(int year)
    {
        return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
    }
    int dayOfYear(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));
        int daynum = 0;
        int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for(int i = 1; i < month; i++)
        {
            daynum += days[i - 1];
        }
        if (month > 2)
        {
            if(isLeapYear(year)) daynum+=1;
        }
        return daynum + day;
    }
};