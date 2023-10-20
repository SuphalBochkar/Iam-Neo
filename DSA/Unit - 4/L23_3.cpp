#include <bits/stdc++.h>
using namespace std;

const int MAX_ARRAY_LENGTH = 100;
void merge_descending(char arr[], int left, int mid, int right)
{
    int n1 = mid + 1 - left;
    int n2 = right - mid;

    int start[n1];
    int end[n2];

    for (int i = 0; i < n1; i++)
        start[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        end[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (start[i] >= end[j])
            arr[k++] = start[i++];
        else
            arr[k++] = end[j++];
    }
    while (i < n1)
    {
        arr[k++] = start[i++];
    }
    while (j < n2)
    {
        arr[k++] = end[j++];
    }
}

void mergeSortDescending(char arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSortDescending(arr, left, mid);
        mergeSortDescending(arr, mid + 1, right);
        merge_descending(arr, left, mid, right);
    }
}

int main()
{
    int n;
    cin >> n;

    char arr[MAX_ARRAY_LENGTH];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSortDescending(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}