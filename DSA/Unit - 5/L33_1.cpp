#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int small = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[small] > arr[left])
        small = left;
    if (right < n && arr[small] > arr[right])
        small = right;
    if (small != i)
    {
        swap(arr[i], arr[small]);
        heapify(arr, n, small);
    }
}

void buildMinHeap(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
}

void deleteMin(int arr[], int &n)
{
    swap(arr[0], arr[n - 1]);
    n--;
    heapify(arr, n, 0);
}

void displayHeap(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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

    buildMinHeap(arr, n);
    deleteMin(arr, n);
    displayHeap(arr, n);

    return 0;
}
