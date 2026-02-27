class Solution {
public:
    int n, st;
    vector<int>curr;
    vector<int>t;
    vector<int>check;
    void s(int st, vector<vector<int>>& ret)
    {
        sort(t.begin(), t.end());
        ret.push_back(curr);
        if (st == n)
            return;

        
        for (int i = st; i < n; i++)
        {

            if (i > st && t[i] == t[i - 1])
                continue;
                
            curr.push_back(t[i]);
           
            s(i + 1, ret);
            
            curr.pop_back();
        }

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        vector<vector<int>> ans;

        t = nums;
        n = (int)nums.size();
        s(0, ans);

        return ans;
    }
};