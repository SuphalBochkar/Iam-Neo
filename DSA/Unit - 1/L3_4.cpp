#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Removing out-of-stock products" << endl;
    cout << "Updated array of product IDs: ";

    for (int i = 0; i < n; i++)
    {
        if (arr[i])
        {
            cout << arr[i] << " ";
        }
    }
}