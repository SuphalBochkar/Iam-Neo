#include <bits/stdc++.h>
using namespace std;

void mergeSort(vector<int> &a, int s, int e)
{
    if (s < e)
    {
        int mid = s + (e - s) / 2;
        mergeSort(a, s, mid);
        mergeSort(a, mid + 1, e);
        merge(a, s, mid, e);
    }
}

void merge(vector<int> &a, int s, int mid, int e)
{
    int n1 = mid - s + 1;
    int n2 = e - mid;

    vector<int> left(n1), right(n2);

    for (int i = 0; i < n1; i++)
        left[i] = a[s + i];
    for (int i = 0; i < n2; i++)
        right[i] = a[mid + 1 + i];

    int i = 0, j = 0, k = s;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
            a[k++] = left[i++];
        else
            a[k++] = right[j++];
    }

    while (i < n1)
    {
        a[k++] = left[i++];
    }
    while (j < n2)
    {
        a[k++] = right[j++];
    }
}

