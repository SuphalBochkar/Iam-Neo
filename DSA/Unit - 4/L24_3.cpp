#include <iostream>
using namespace std;

void rearrangeNegativesBeforePositives(int arr[], int n)
{
    int negativeIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[negativeIndex]);
            negativeIndex++;
        }
    }
}

int part(int arr[], int low, int high)
{
    int pivot = arr[low];
    int start = low + 1;
    int end = high;

    while (start <= end)
    {
        while (start <= end && arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start <= end)
        {
            swap(arr[start], arr[end]);
        }
    }

    swap(arr[low], arr[end]);
    return end;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int q = part(arr, low, high);
        quickSort(arr, low, q - 1);
        quickSort(arr, q + 1, high);
    }
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    rearrangeNegativesBeforePositives(arr, n);
    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}