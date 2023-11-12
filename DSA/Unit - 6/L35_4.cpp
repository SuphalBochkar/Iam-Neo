#include <bits/stdc++.h>
using namespace std;
#define MAX_V 100
void bfsOfGraph(int V, vector<vector<int>> &adjList)
{
    vector<bool> visited(V, false);
    queue<int> q;
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            q.push(i);
            visited[i] = true;
            while (!q.empty())
            {
                int cur = q.front();
                q.pop();
                cout << cur << " ";
                for (int j : adjList[cur])
                {
                    if (!visited[j])
                    {
                        q.push(j);
                        visited[j] = true;
                    }
                }
            }
        }
    }
}

int main()
{
    int V, E;
    cin >> V >> E;
    vector<vector<int>> adjList(V);
    for (int i = 0; i < E; ++i)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
    }
    bfsOfGraph(V, adjList);
    return 0;
}
