class Solution {
public:
    int m, n;
    void dfs(vector<vector<char>>& temp, int i,int j)
    {
        if (i < 0 || j < 0 || i >= n || j >= m || temp[i][j] == '0')
            return;

        temp[i][j] = '0';

        dfs(temp, i + 1, j);
        dfs(temp, i -1, j);
        dfs(temp, i, j+1);
        dfs(temp, i, j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        n = grid.size();
        m = grid[0].size();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0;j < m;j++)
            {
                if (grid[i][j] == '1')
                {
                    ans++;
                    dfs(grid, i, j);
                }
            }
        }

        return ans;

    }
};
