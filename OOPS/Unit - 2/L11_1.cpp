#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n][n], b[n][n], pro[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int row = 0;
            for (int k = 0; k < n; k++)
            {
                row += a[i][k] * b[k][j];
            }
            pro[i][j] = row;
        }
    }

    cout << "The product of the two matrices is:" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << pro[i][j] << "\t";
        }
        cout << endl;
    }
}
