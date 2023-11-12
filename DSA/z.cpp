#include <bits/stdc++.h>
using namespace std;

void add_edge(int adj[][100], int src, int dest)
{
    adj[src][dest] = 1;
    adj[dest][src] = 1;
}
bool BFS(int adj[][100], int src, int dest, int v,
         int pred[], int dist[])
{
    int queue[v];
    int front = -1, rear = -1;
    bool visited[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
        dist[i] = INT_MAX;
        pred[i] = -1;
    }
    visited[src] = true;
    dist[src] = 0;
    queue[++rear] = src;
    while (front != rear)
    {
        int u = queue[++front];
        for (int i = 0; i < v; i++)
        {
            if (adj[u][i] && !visited[i])
            {
                visited[i] = true;
                dist[i] = dist[u] + 1;
                pred[i] = u;
                queue[++rear] = i;
                if (i == dest)
                    return true;
            }
        }
    }
    return false;
}
void printShortestDistance(int adj[][100], int s, int dest, int v, int pred[], int dist[])
{
    int path[v];
    int crawl = dest;
    int pathLength = 0;
    path[pathLength++] = crawl;
    while (pred[crawl] != -1)
    {
        path[pathLength++] = pred[crawl];
        crawl = pred[crawl];
    }
    cout << "Shortest path length is: " << dist[dest] << endl;
    cout << "Path is: ";
    for (int i = pathLength - 1; i >= 0; i--)
        cout << path[i] << " ";
}
int main()
{
    int v, e;
    cin >> v;
    int adj[100][100] = {0};
    cin >> e;
    for (int i = 0; i < e; i++)
    {
        int src, dest;
        cin >> src >> dest;
        add_edge(adj, src, dest);
    }
    int source, dest;
    cin >> source >> dest;
    int pred[v], dist[v];
    if (BFS(adj, source, dest, v, pred, dist))
        printShortestDistance(adj, source, dest, v, pred, dist);
    return 0;
}


