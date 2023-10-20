#include <bits/stdc++.h>
using namespace std;

bool isValidInorder(int arr[], int n)
{
    if (n <= 1)
    {
        return true;
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (isValidInorder(arr, n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}