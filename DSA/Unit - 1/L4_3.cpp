#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());
    int q = arr.size();
    for (int i = 0; i < q; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
