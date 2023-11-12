#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    int vertices;
    vector<vector<int>> adjList;

    Graph(int v) : vertices(v), adjList(v) {}

    void addEdge(int u, int v)
    {
        adjList[u].push_back(v);
        // adjList[v].push_back(u);
    }

    void bfs(int start)
    {
        vector<bool> visited(vertices, false);
        queue<int> q;

        visited[start] = true;
        q.push(start);

        cout << "BFS Traversal: ";
        while (!q.empty())
        {
            int current = q.front();
            q.pop();
            cout << current << " ";

            for (int neighbor : adjList[current])
            {
                if (!visited[neighbor])
                {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }

    void dfs(int start)
    {
        vector<bool> visited(vertices, false);
        stack<int> s;

        s.push(start);

        cout << "DFS Traversal: ";
        while (!s.empty())
        {
            int current = s.top();
            s.pop();

            if (!visited[current])
            {
                cout << current << " ";
                visited[current] = true;
            }

            for (int neighbor : adjList[current])
            {
                if (!visited[neighbor])
                {
                    s.push(neighbor);
                }
            }
        }
        cout << endl;
    }
};

int main()
{
    Graph g(6);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);
    g.addEdge(3, 5);
    g.addEdge(4, 5);

    g.bfs(0);
    g.dfs(0);

    return 0;
}
