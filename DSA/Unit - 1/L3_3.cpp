#include <bits/stdc++.h>
using namespace std;

void middle_insert(vector<int> &arr, int &n, int q, int k)
{
    if (q >= 1 && q <= n + 1)
    {
        for (int i = n; i > q - 1; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[q - 1] = k;
        n++;
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

    int index, key;
    cin >> index >> key;

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    if (index >= 1 && index <= n + 1)
    {
        middle_insert(arr, n, index, key);

        cout << "Updated array: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        cout << "Invalid position!";
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int index, key;
    cin >> index >> key;

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
