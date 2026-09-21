class Solution {
public:
    int mostWordsFound(vector<string>& sentences) 
    {
        int spaces = 1;
        int max_sp = 0;

        for(string sentence : sentences)
        {
            for(char c : sentence)
            {
                if (c == ' ') spaces++;
            }
            max_sp = max(spaces, max_sp);
            spaces = 1;
        }

        return max_sp;
    }
};