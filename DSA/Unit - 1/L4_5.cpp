#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> list;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        list.push_back(a);
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        list.push_back(a);
    }

    sort(list.begin(), list.end());

    for (int i = 0; i < n; i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;

    for (int i = n; i < n + m; i++)
    {
        cout << list[i] << " ";
    }

    return 0;
}
