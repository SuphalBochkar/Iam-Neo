#include <bits/stdc++.h>
using namespace std;

void MaxHeapify(int arr[], int i, int n)
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
        MaxHeapify(arr, large, n);
    }
}
void convertMaxHeap(int arr[], int n)
{
    for (int i = n / 2; i >= 0; --i)
        MaxHeapify(arr, i, n);
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arrayCount;
    cin >> arrayCount;
    int arr[arrayCount];
    for (int i = 0; i < arrayCount; i++)
    {
        cin >> arr[i];
    }

    convertMaxHeap(arr, arrayCount);

    printArray(arr, arrayCount);
    cout << "The largest element is " << arr[0] << endl;

    return 0;
}