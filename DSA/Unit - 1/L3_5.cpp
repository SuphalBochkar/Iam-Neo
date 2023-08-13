#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int mini1 = INT_MAX;
    int mini2 = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a < mini1)
        {
            mini2 = mini1;
            mini1 = a;
        }
        else if (a < mini2 && a != mini1)
        {
            mini2 = a;
        }
    }

    cout << "Second Smallest Element: ";
    cout << mini2;

    return 0;
}