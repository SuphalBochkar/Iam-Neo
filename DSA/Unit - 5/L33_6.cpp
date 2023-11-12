#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
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
        heapify(arr, n, large);
    }
}

void buildMaxHeap(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
}

void deleteAllMaxOccurrences(int arr[], int &n)
{
    buildMaxHeap(arr, n);

    int maxEle = arr[0];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == maxEle)
            c++;
    }

    while (c > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == maxEle)
            {
                swap(arr[i], arr[n - 1]);
                n--;
                heapify(arr, n, i);
                c--;
                break;
            }
        }
    }
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

    buildMaxHeap(arr, n);

    deleteAllMaxOccurrences(arr, n);
    displayHeap(arr, n);

    return 0;
}
