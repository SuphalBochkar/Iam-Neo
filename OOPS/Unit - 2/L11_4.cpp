#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, r1, r2;
    cin >> n >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            arr[i][j] = a;
        }
    }

    cin >> r1 >> r2;

    if ((r1 <= 1 && r1 > n) || r2 <= 1 && r2 > n)
    {
        cout << "Invalid row numbers";
        return 0;
    }

    for (int j = 0; j < n; j++)
    {
        swap(arr[r1 - 1][j], arr[r2 - 1][j]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}