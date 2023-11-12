#include <iostream>
using namespace std;

void min_heap(int *a, int m, int n)
{
    int j, temp;
    temp = a[m];
    j = 2 * m;
    while (j <= n)
    {
        if (j < n && a[j + 1] < a[j])
        {
            j = j + 1;
        }
        if (temp < a[j])
        {
            break;
        }
        else if (temp >= a[j])
        {
            a[j / 2] = a[j];
            j = 2 * j;
        }
    }
    a[j / 2] = temp;
}

void build_minheap(int *a, int n)
{
    int k;
    for (k = n / 2; k >= 1; k--)
    {
        min_heap(a, k, n);
    }
}

int main()
{
    int n, i;
    cin >> n;

    int a[n + 1]; 
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int element;
    cin >> element;
    if (element < 1 || element > n)
    {
        cout << "Invalid entry" << endl;
        return 0;
    }
    build_minheap(a, n);
    cout << "Min heap is: ";
    for (i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl
         << "Kth element in min heap is " << a[element];
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void min_heapify(int arr[], int i, int n)
{
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] < arr[smallest])
        smallest = left;
    if (right < n && arr[right] < arr[smallest])
        smallest = right;

    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        min_heapify(arr, smallest, n);
    }
}

void build_min_heap(int arr[], int n)
{
    for (int i = (n / 2) - 1; i >= 0; i--)
    {
        min_heapify(arr, i, n);
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

    int k;
    cin >> k;

    if (k > n)
    {
        cout << "Invalid entry" << endl;
        return 0;
    }

    build_min_heap(arr, n);

    cout << "Min heap is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Kth element in min heap is " << arr[k - 1] << endl;

    return 0;
}
