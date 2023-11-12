#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[largest] < arr[left])
        largest = left;

    if (right < n && arr[largest] < arr[right])
        largest = right;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void buildMaxHeap(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
}
void deleteEvenElements(int arr[], int &n)
{
    int i, j;
    int evenCount = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
    }
    
    if (evenCount == 0)
    {
        return;
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr[i] = arr[n - 1];
            n--;

            buildMaxHeap(arr, n);
            i--;
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

    deleteEvenElements(arr, n);

    displayHeap(arr, n);

    return 0;
}
