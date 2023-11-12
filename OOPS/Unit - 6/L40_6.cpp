#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n > 15)
    {
        cout << -1 << endl;
        return 0;
    }

    list<int> asd;
    set<int> uniqueBids;
    int totalSum = 0;

    for (int i = 0; i < n; i++)
    {
        int bid;
        cin >> bid;

        if (uniqueBids.count(bid) == 0)
        {
            uniqueBids.insert(bid);
            totalSum += bid;
        }
    }
    cout << "Sum of unique elements: " << totalSum << endl;
    return 0;
}
