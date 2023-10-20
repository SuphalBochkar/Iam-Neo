#include <bits/stdc++.h>
using namespace std;

int partition(string arr[], int low, int high)
{
    string pivot = arr[low];
    int start = low;
    int end = high;

    while (start < end)
    {
        while (arr[start] <= pivot && start <= high)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(arr[start], arr[end]);
        }
    }

    swap(arr[low], arr[end]);
    return end;
}

void quickSort(string arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void recursiveQuickSort(string arr[], int n)
{
    quickSort(arr, 0, n - 1);
}

int main()
{
    int n;
    cin >> n;

    string years[n];

    for (int i = 0; i < n; i++)
    {
        cin >> years[i];
    }

    recursiveQuickSort(years, n);

    for (int i = 0; i < n; i++)
    {
        cout << years[i] << " ";
    }

    return 0;
}
