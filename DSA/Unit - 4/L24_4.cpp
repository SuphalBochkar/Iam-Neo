#include <bits/stdc++.h>
using namespace std;

int countOnes(int num)
{
    int count = 0;
    while (num)
    {
        count += (num & 1);
        num >>= 1;
    }
    return count;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];

    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (countOnes(arr[j]) < countOnes(pivot) || (countOnes(arr[j]) == countOnes(pivot) && arr[j] < pivot))
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, N - 1);

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
