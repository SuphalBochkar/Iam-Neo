#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    int V;
    vector<vector<int>> adj;

    Graph(int vertices)
    {
        V = vertices;
        adj = vector<vector<int>>(V);
    }

    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
    }

    int dfs(int node, vector<int> &dp, vector<int> &vis)
    {
        if (vis[node])
        {
            return dp[node];
        }

        vis[node] = 1;
        int maxPath = 0;

        for (int i = 0; i < adj[node].size(); i++)
        {
            int neighbor = adj[node][i];
            int temp = 1 + dfs(neighbor, dp, vis);
            if (temp > maxPath)
            {
                maxPath = temp;
            }
        }

        dp[node] = maxPath;
        return maxPath;
    }

    int findLongestFriendshipChain()
    {
        vector<int> dp(V, 0);
        vector<int> vis(V, 0);

        int longestChain = 0;
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                int chainLength = dfs(i, dp, vis);
                if (chainLength > longestChain)
                {
                    longestChain = chainLength;
                }
            }
        }
        return longestChain;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    Graph g(n);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u - 1, v - 1);
    }

    cout << g.findLongestFriendshipChain();
    return 0;
}
