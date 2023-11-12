#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    int V;
    vector<vector<int>> adj;

    Graph(int vertices) : V(vertices)
    {
        adj = vector<vector<int>>(V, vector<int>(V, 0));
    }

    void addEdge(int u, int v)
    {
        adj[u][v] = 1;
    }

    void dfs(int s, vector<int> &visited)
    {
        visited[s] = 1;
        cout << s << " ";

        for (int i = 0; i < V; i++)
        {
            if (adj[s][i] && !visited[i])
            {
                dfs(i, visited);
            }
        }
    }
};

int main()
{
    int u, v;
    cin >> u >> v;
    Graph g(u);

    for (int i = 0; i < v; i++)
    {
        int a, b;
        cin >> a >> b;
        g.addEdge(a, b);
    }

    int start;
    cin >> start;

    cout << "Depth First Traversal starting from vertex " << start << ":\n";
    vector<int> vis(u, 0);

    g.dfs(start, vis);
    return 0;
}
