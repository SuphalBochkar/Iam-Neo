#include <bits/stdc++.h>
using namespace std;

void findFrequency(int *arr, int size)
{
    map<int, int> my_dict;

    for (int i = 0; i < size; i++)
    {
        my_dict[arr[i]]++;
    }

    for (auto entry : my_dict)
    {
        cout << entry.first << " - " << entry.second << " time";
        if (entry.second > 1)
        {
            cout << "s";
        }
        cout << endl;
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

    findFrequency(arr, n);

    return 0;
}
