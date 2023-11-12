#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n <= 0)
    {
        cout << "Number of integers should be positive!" << endl;
        return 0;
    }

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "List of Odd Integers: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
            cout << arr[i] << " ";
    }

    cout << "\nList of Even Integers: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}
