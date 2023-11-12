#include <iostream>
using namespace std;
void floyd(int n, int graph[][100])
{
    int INF = 1e9;
    int reachability[n][100];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            reachability[i][j] = graph[i][j];
            if (i != j && graph[i][j] == 0)
            {
                reachability[i][j] = INF;
            }
        }
    }
    for (int k = 0; k < n; ++k)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (reachability[i][k] < INF && reachability[k][j] < INF)
                {
                    reachability[i][j] = min(reachability[i][j], reachability[i][k] + reachability[k][j]);
                }
            }
        }
    }
    bool isStronglyConnected = true;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i != j && reachability[i][j] == INF)
            {
                isStronglyConnected = false;
                break;
            }
        }
    }
    if (isStronglyConnected)
    {
        cout << "The graph is strongly connected";
    }
    else
    {
        cout << "The graph is not strongly connected";
    }
}
int main()
{
    int n;
    cin >> n;
    int graph[100][100];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> graph[i][j];
        }
    }
    floyd(n, graph);
    return 0;
}