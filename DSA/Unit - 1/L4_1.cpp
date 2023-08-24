#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;

    vector<int> bigArr;

    int tot = 0;
    for (int i = 0; i < k; i++)
    {
        int n;
        cin >> n;
        tot += n;
        for (int j = 0; j < n; j++) 
        {
            int a;
            cin >> a;
            bigArr.push_back(a);
        }
    }

    sort(bigArr.begin(), bigArr.end());

    for (int i = tot - 1; i >= 0; i--)
    {
        cout << bigArr[i] << " ";
    }

    return 0; // Added return statement
}
