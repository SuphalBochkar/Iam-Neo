#include <bits/stdc++.h>
using namespace std;

void ins(vector<float> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        float temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;

        cout << "After Iteration " << i << ": ";
        for (float i : arr)
        {
            cout << fixed << setprecision(2) << i << " ";
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;

    vector<float> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Initial order: ";
    for (float i : arr)
    {
        cout << fixed << setprecision(2) << i << " ";
    }
    cout << endl;

    ins(arr, n);

    cout << "Sorted order: ";
    for (int i = 0; i < n; i++)
    {
        cout << fixed << setprecision(2) << arr[i] << " ";
    }
}