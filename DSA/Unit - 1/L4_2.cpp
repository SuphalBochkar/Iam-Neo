#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr1, arr2;
    int maxi = INT_MIN;

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        arr1.push_back(num);
        if (maxi < num)
        {
            maxi = num;
        }
    }

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr2.push_back(num);
        if (maxi < num)
        {
            maxi = num;
        }
    }

    cout << maxi;

    return 0;
}
