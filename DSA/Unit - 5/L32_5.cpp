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
        swap(arr[i], arr[large]);
        Heapify(arr, large, n);
    }
}
void maxHeap(int a[], int n)
{
    for (int i = n / 2; i >= 0; i--)
    {
        Heapify(a, i, n);
    }
}
int main()
{
    int n, i;
    cin >> n;

    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    maxHeap(a, n);
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}