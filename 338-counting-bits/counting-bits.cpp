class Solution {
public:
    vector<int> countBits(int n) {
        int count = 0;
        vector<int>result;

        for (int i = 0; i <= n; i++)
        {
            count = __builtin_popcount(i);
            result.push_back(count);
            
        }

        return result;
    }
};
