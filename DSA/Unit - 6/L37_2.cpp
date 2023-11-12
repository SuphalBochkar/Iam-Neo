#include <bits/stdc++.h>
using namespace std;

#define INF 1e7
#define MAXN 100
int dis[MAXN][MAXN];
int Next[MAXN][MAXN];
void initialise(int V, int graph[MAXN][MAXN])
{
    for (int i = 0; i < V; ++i)
    {
        for (int j = 0; j < V; ++j)
        {
            dis[i][j] = graph[i][j];
            if (graph[i][j] == INF)
                Next[i][j] = -1;
            else
                Next[i][j] = j;
        }
    }
}
void floydWarshall(int V)
{
    for (int k = 0; k < V; ++k)
    {
        for (int i = 0; i < V; ++i)
        {
            for (int j = 0; j < V; ++j)
            {
                if (dis[i][k] == INF || dis[k][j] == INF)
                    continue;
                if (dis[i][j] > dis[i][k] + dis[k][j])
                {
                    dis[i][j] = dis[i][k] + dis[k][j];
                    Next[i][j] = Next[i][k];
                }
            }
        }
    }
}
void printPath(int path[], int n)
{
    for (int i = 0; i < n - 1; ++i)
        cout << path[i] << " -> ";
    cout << path[n - 1];
}
int main()
{
    int V;
    cin >> V;
    int graph[MAXN][MAXN];
    for (int i = 0; i < V; ++i)
    {
        for (int j = 0; j < V; ++j)
        {
            cin >> graph[i][j];
        }
    }
    initialise(V, graph);
    floydWarshall(V);
    int source = 0;
    int dest;
    cin >> dest;
    int path[MAXN];
    path[0] = source;
    int index = 1;
    while (source != dest)
    {
        source = Next[source][dest];
        path[index++] = source;
    }
    cout << "Shortest path from Source to destination " << dest << ": ";
    printPath(path, index);
    return 0;
}