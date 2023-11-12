#include <bits/stdc++.h>
using namespace std;

void Heapify(int arr[], int i, int n)
{
    int large = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[large] < arr[left])
        large = left;
    if (right < n && arr[large] < arr[right])
        large = right;
    if (large != i)
    {
        swap(arr[large], arr[i]);
        Heapify(arr, large, n);
    }
}

void maxHeap(int arr[], int n)
{
    for (int i = n / 2; i >= 0; i--)
    {
        Heapify(arr, i, n);
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
    maxHeap(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}