#include <bits/stdc++.h>
using namespace std;

void middle_insert(vector<char> &arr, int &n, int index, int key)
{
    if (index >= 0 && index <= n)
    {
        for (int i = n; i > index; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[index] = key;
        n++;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<char> arr(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int index;
    cin >> index;

    char key;
    cin >> key;

    middle_insert(arr, n, index, key);

    cout << "Updated array after insertion: ";
    for (char c : arr)
    {
        cout << c << " ";
    }
    return 0;
}
