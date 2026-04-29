struct node
{
    int to;
    int cost;
};


class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {

       vector<int> dist(n+1, INT_MAX);
        vector<vector<node>> adj(n+1);


        for (auto& t : times) {
            int u = t[0];
            int v = t[1];
            int w = t[2];

            adj[u].push_back({ v,w});
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        dist[k] = 0;
        pq.push({ 0,k });

        while (!pq.empty())
        {
            auto p = pq.top();
            pq.pop();

            int d = p.first;
            int u = p.second;

            if (d > dist[u]) continue;

            for (auto& e : adj[u])
            {
                int v = e.to;
                int w = e.cost;

                if (dist[u] + w < dist[v])
                {
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            }
        }

        int ans = 0;

        for (int i = 1; i <= n; i++)
        {
            if (dist[i] == INT_MAX)
                return -1;

            else
            {
                ans = max(ans, dist[i]);
            }
        }

        return ans;
        
    }
};