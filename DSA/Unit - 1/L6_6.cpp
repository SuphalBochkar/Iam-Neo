#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> even, odd;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if (i % 2 == 0)
        {
            odd.push_back(a);
        }
        else
        {
            even.push_back(a);
        }
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    vector<int> ans(n);

    int i = 0, j = odd.size() - 1;

    for (int k = 0; k < n; k++)
    {
        if (k % 2 == 0)
        {
            ans[k] = odd[j];
            j--;
        }
        else
        {
            ans[k] = even[i];
            i++;
        }
    }

    for (int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
