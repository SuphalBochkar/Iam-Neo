#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    int n;
    vector<vector<int>> adj;
    vector<bool> visited;

    Graph(int vertices) : n(vertices)
    {
        adj = vector<vector<int>>(n);
        visited = vector<bool>(n, false);
    }
    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
        // adj[v].push_back(u);
    }

    bool hasPath(int start, int end)
    {
        dfs(start);
        return visited[end];
    }
    void dfs(int v)
    {
        visited[v] = true;
        for (int u : adj[v])
        {
            if (!visited[u])
            {
                dfs(u);
            }
        }
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
        g.addEdge(u, v);
    }

    int start, end;
    cin >> start >> end;

    if (g.hasPath(start, end))
    {
        cout << "There is a path from " << start << " to " << end << endl;
    }
    else
    {
        cout << "There is no path from " << start << " to " << end << endl;
    }

    return 0;
}
