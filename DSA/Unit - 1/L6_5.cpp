#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &arr, int n)
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
        cout << "Height order of students after iteration " << i + 1 << ": ";
        for (int val : arr)
        {
            cout << val << " ";
        }
        cout << endl;
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

    cout << "Student's height order before sorting: ";
    for (int i : arr)
    {
        cout << i << " ";
    }

    cout << endl;

    selection_sort(arr, n);

    cout << "After final comparison of all students, the height order becomes: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
}
