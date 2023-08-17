#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int pos;
    cin >> pos;

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    if (pos < n && pos >= 0)
    {
        cout << endl
             << "Updated array: ";
        for (int i = 0; i < n; i++)
        {
            if (i != (pos - 1))
            {
                cout << arr[i] << " ";
            }
        }
    }
    else
    {
        cout << "Invalid position!";
    }
}