#include <bits/stdc++.h>
using namespace std;

void Merge(int *a, int low, int high, int mid)
{
    int n1 = mid + 1 - low;
    int n2 = high - mid;

    vector<int> left(n1), right(n2);

    for (int i = 0; i < n1; i++)
        left[i] = a[low + i];
    for (int i = 0; i < n2; i++)
        right[i] = a[mid + 1 + i];

    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
            a[k++] = left[i++];
        else
            a[k++] = right[j++];
    }
    while (i < n1)
    {
        a[k++] = left[i++];
    }
    while (j < n2)
    {
        a[k++] = right[j++];
    }
}

void MergeSort(int *a, int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        MergeSort(a, low, mid);
        MergeSort(a, mid + 1, high);
        Merge(a, low, high, mid);
    }
}

int main()
{
    int n, i;
    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    MergeSort(arr, 0, n - 1);
    for (i = (n - 1); i >= 0; i--)
        cout << arr[i] << " ";

    return 0;
}