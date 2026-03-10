class Solution {
public:
    int n, m;
    static const int N = 1e5 + 5;
    vector<vector<bool>> vis;
    void dfs(vector<vector<char>>& board, int i,int j,int w,string wo,bool&ans)
    {
            

        if (i < 0 || j < 0 || i >= n || j >= m || board[i][j] != wo[w] || vis[i][j] ==1)
            return;
        if (w == wo.size() - 1)
        {
            ans = true;
            return;
        }
        
        vis[i][j] = 1;
        dfs(board, i + 1, j, w+1, wo,ans );
        dfs(board, i - 1, j, w+1, wo,ans );
        dfs(board, i , j+1, w+1, wo,ans) ;
        dfs(board, i , j-1, w+1, wo,ans);
        
        vis[i][j] = 0;
    }
    bool exist(vector<vector<char>>& board, string word) {
        bool ans = false;
       
        int w = 0;
        n = board.size();
        m = board[0].size();
        vis = vector<vector<bool>>(n, vector<bool>(m, false));

        for (int i = 0; i <n; i++)
        {
            for (int j = 0;j < m;j++)
                if (board[i][j] == word[w])
                {

                    dfs(board, i, j,w,word,ans);
                }
                    
        }

        return ans;
    }
};