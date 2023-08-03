#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<float> arr;

    for (int i = 0; i < n; i++)
    {
        float a;
        cin >> a;
        if (a > 0)
        {
            arr.push_back(a);
        }
    }

    int count = arr.size();

    cout << "Updated Array with Positive Closing Prices: ";
    for (int j = 0; j < count; j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}
