class Solution {
public:
    int minimumChairs(string s) {
        int people = 0;
        int mp = 0;
        for(char status : s)
        {
            if (status == 'E') people++;
            else people--;
            mp = max(people, mp);
        }
        return mp;
    }
};