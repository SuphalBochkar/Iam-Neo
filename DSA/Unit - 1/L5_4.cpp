#include <bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> &arr, int n, int k)
{
    int s = 0, e = n - 1, leftOcc = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k)
        {
            leftOcc = mid;
            e = mid - 1;
        }
        else if (k < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return leftOcc;
}

int lastOcc(vector<int> &arr, int n, int k)
{
    int s = 0, e = n - 1, rightOcc = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k)
        {
            rightOcc = mid;
            s = mid + 1;
        }
        else if (k < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return rightOcc;
}

int noOfOccurrences(vector<int> &arr, int n, int k)
{
    int f = firstOcc(arr, n, k);
    int l = lastOcc(arr, n, k);

    if (f == -1 || l == -1)
        return 0;

    return l - f + 1;
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

    cout << noOfOccurrences(arr, n, q);
}


