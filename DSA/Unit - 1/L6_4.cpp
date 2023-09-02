#include <bits/stdc++.h>
using namespace std;

void findKth(vector<int> &arr, int n, int k)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[mini] > arr[j])
            {
                mini = j;
            }
        }
        if (mini != i)
        {
            swap(arr[mini], arr[i]);
        }
    }
}

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    findKth(arr, n, key);

    cout << "Sorted order: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "The kth smallest element is: " << arr[key - 1];
}