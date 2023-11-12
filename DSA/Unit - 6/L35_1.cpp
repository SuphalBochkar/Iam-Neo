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

    void DFS(int v, vector<int> &visited)
    {
        visited[v] = 1;
        cout << v << " ";

        for (int i = 0; i < V; i++)
        {
            if (adj[v][i] && !visited[i])
                DFS(i, visited);
        }
    }

    void depthFirstTraversal(int startVertex)
    {
        vector<int> visited(V, 0);
        cout << "Depth First Traversal starting from vertex " << startVertex << ":\n";
        DFS(startVertex, visited);
    }
};

int main()
{
    int V, E;
    cin >> V;
    cin >> E;

    Graph g(V);

    for (int i = 0; i < E; ++i)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }

    int startVertex;
    cin >> startVertex;

    g.depthFirstTraversal(startVertex);

    return 0;
}
