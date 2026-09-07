class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size())
            return false;
        
        // old
        // for(int i = 0; i < s.size(); i++)
        // {
        //     rotate(s.begin(), s.begin() + 1, s.end()); //left shift
        //     if (s == goal) return true;
        // }
        // return false;

        // new: making a double string
        string doubleS = s + s;
        return doubleS.find(goal) != string::npos; //if found, returns index, if not, returns npos

    }
};