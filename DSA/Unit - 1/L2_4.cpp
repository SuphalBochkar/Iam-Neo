#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int q, key;

    cin >> q >> key;

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    if (q < n + 1 && q >= 0)
    {
        for (int i = n; i > q - 1; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[q - 1] = key;

        cout << "Updated array: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        cout << "Invalid position!";
    }
}