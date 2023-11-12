#include <bits/stdc++.h>
using namespace std;
#define MAX_N 100

int findCelebrity(int acquaintances[MAX_N][MAX_N], int n)
{
    int a = 0, b = 1;

    while (b < n)
    {
        if (acquaintances[a][b] == 1)
            a = b;
        b++;
    }

    for (int i = 0; i < n; i++)
    {
        if (i != a && (acquaintances[a][i] == 1 || acquaintances[i][a] == 0))
            return -1;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;

    int acquaintances[MAX_N][MAX_N];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> acquaintances[i][j];
        }
    }

    int celebrityIndex = findCelebrity(acquaintances, n);

    if (celebrityIndex != -1)
    {
        cout << "A celebrity is present at index " << celebrityIndex << " in the list of attendees.";
    }
    else
    {
        cout << "There is no celebrity at the party.";
    }

    return 0;
}