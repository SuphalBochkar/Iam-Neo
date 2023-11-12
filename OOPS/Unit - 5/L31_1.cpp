#include <bits/stdc++.h>
using namespace std;

void findPairsWithSum(int *arr, int n, int k)
{
    unordered_set<int> complements;
    vector<pair<int, int>> pairs;

    for (int i = 0; i < n; i++)
    {
        int complement = k - arr[i];

        if (complements.find(complement) != complements.end())
        {
            pairs.push_back(make_pair(arr[i], complement));
        }

        complements.insert(arr[i]);
    }

    if (pairs.empty())
    {
        cout << "Pairs with the sum " << k << " are:\n";
        cout << "No pair" << endl;
    }
    else
    {
        cout << "Pairs with the sum " << k << " are:\n";
        for (const auto &pair : pairs)
        {
            cout << "Pair found: (" << pair.first << ", " << pair.second << ")\n";
        }
    }
}

int main()
{
    int n;
    cin >> n;

    if (n <= 0)
    {
        cout << "Size of the array should be positive!" << endl;
        return 0;
    }

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    findPairsWithSum(arr, n, k);

    delete[] arr;

    return 0;
}