class Solution {
public:

   static const int N = 1e5 + 5;
    int vis[N];
    int n;

    bool dfs(int node, vector<vector<int>>& graph)
    {
        if (vis[node] == 2)
            return false;

        if (vis[node] == 1)
            return true;
            
        vis[node] = 2;

        for (auto it : graph[node])
        {
            if (!dfs(it,graph))
                return false;

           
        }
       
        vis[node] = 1;
        return true;
    }


    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>ans;
        n = graph.size();

        for (int i = 0; i <n; i++)
        {
            if (dfs(i, graph))
                ans.push_back(i);
        }

        return ans;
    }
};

