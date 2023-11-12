#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<vector<int>> &graph, int source, int destination)
{
    int v = graph.size();
    vector<bool> visited(v, false);
    vector<int> distance(v, 0);
    vector<int> parent(v, -1);

    queue<int> q;
    q.push(source);
    visited[source] = true;

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        for (int neighbor : graph[current])
        {
            if (!visited[neighbor])
            {
                q.push(neighbor);
                visited[neighbor] = true;
                distance[neighbor] = distance[current] + 1;
                parent[neighbor] = current;
            }
        }
    }

    vector<int> path;
    int current = destination;
    while (current != -1)
    {
        path.push_back(current);
        current = parent[current];
    }

    reverse(path.begin(), path.end());

    return path;
}

int main()
{
    int v, e;
    cin >> v >> e;

    vector<vector<int>> graph(v);

    for (int i = 0; i < e; i++)
    {
        int src, dest;
        cin >> src >> dest;
        graph[src].push_back(dest);
        graph[dest].push_back(src);
    }

    int source, destination;
    cin >> source >> destination;

    vector<int> path = bfs(graph, source, destination);

    cout << "Shortest path length is: " << path.size() - 1 << endl;
    cout << "Path is: ";
    for (int location : path)
    {
        cout << location << " ";
    }
    cout << endl;

    return 0;
}
