class Solution {
public:
    int convert(string condition)
    {
        int count = 0;
        for(char c : condition)
        {
            if (c == '1') count++;
        }
        return count;
    }
    int numberOfBeams(vector<string>& bank) {
        vector<int> sources; 
        for(string condition : bank)
        {
            int converted = convert(condition);
            if (converted!= 0) sources.push_back(converted);
        }
        int beams = 0, n = sources.size();
        if (n == 1) return 0;
        for(int i = 0; i < n - 1; i++)
        {
            beams += sources[i] * sources[i + 1];
        }
        return beams;
    }
};