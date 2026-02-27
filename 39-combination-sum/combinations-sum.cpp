class Solution {
public:
    int st, n,sum,r,diff;
    vector<int>curr;
    vector<int>temp;
    


    void helper( int st,vector<vector<int>>&ret)
    {
            
        for (int i = st; i < n; i++)
        {
            sum += temp[i];
            curr.push_back(temp[i]);

            if (sum == r)
                ret.push_back(curr);
                
               

            else if (sum < r)
            {
                helper(i, ret);
               // curr.pop_back();

            }

            
            
            curr.pop_back();
            sum -= temp[i];
                
                
       
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
         r = target;
        n = candidates.size();
        temp = candidates;
        helper(0, ans);

        return ans;

    }
};