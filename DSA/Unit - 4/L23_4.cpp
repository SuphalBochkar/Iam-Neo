#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid + 1 - left;
    int n2 = right - mid;

    int s[n1];
    int e[n2];

    for (int i = 0; i < n1; i++)
        s[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        e[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)

    {
        if (s[i] % 2 == 0 && e[j] % 2 != 0)
            arr[k++] = s[i++];
        else if (s[i] % 2 != 0 && e[j] % 2 == 0)
            arr[k++] = e[j++];
        else if (s[i] % 2 == 0 && e[j] % 2 == 0)
            arr[k++] = s[i++];
        else
            arr[k++] = s[i++];
    }
    while (i < n1)

    {
        arr[k++] = s[i++];
    }
    while (j < n2)

    {
        arr[k++] = e[j++];
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
