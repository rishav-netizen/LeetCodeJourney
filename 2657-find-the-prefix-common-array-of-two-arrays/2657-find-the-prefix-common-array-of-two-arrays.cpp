class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> hash(n + 1, 0);
        vector<int> C(n, 0);
        for(int i = 0; i < n; ++i)
        {
            hash[A[i]]++; 
            hash[B[i]]++;
            
            for(int j = 1; j <= n; ++j)
            {
                if (hash[j] == 2) C[i]++;
            }
        }
        return C;   
    }
};