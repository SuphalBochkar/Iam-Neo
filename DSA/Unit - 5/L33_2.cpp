#include <bits/stdc++.h>
using namespace std;

void maxHeapify(int arr[], int n, int i)
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
        swap(arr[i], arr[large]);
        maxHeapify(arr, n, large);
    }
}

int removeHighestScore(int arr[], int &n)
{
    int a = arr[0];
    swap(arr[0], arr[n - 1]);
    n--;
    maxHeapify(arr, n, 0);
    return a;
}

int main()
{
    int *studentScores = nullptr;
    int n = 0;

    cin >> n;
    studentScores = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> studentScores[i];
    }

    for (int i = n / 2 - 1; i >= 0; i--)
    {
        maxHeapify(studentScores, n, i);
    }

    int highestScore = removeHighestScore(studentScores, n);
    cout << highestScore << endl;
    delete[] studentScores;
    return 0;
}