#include <bits/stdc++.h>
using namespace std;

void bubble(vector<string> &arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        bool flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = 1;
            }
        }
        if (!flag)
        {
            break;
        }
    }
}

int main()
{

    int n;
    cin >> n;

    vector<string> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubble(arr, n);
    
    for (const string &word : arr)
    {
        cout << word << " ";
    }
}