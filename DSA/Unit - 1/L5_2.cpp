#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int n, int key)
{

    int start = 0, end = n - 1;
    int count = 0;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] <= key)
        {
            count = mid + 1;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int q;
    cin >> q;

    cout << binarySearch(arr, n, q);
    return 0;
}
