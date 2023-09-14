#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sen;
    cin >> sen;

    string ans = "";

    bool arr[256] = {false};

    for (char c : sen)
    {
        if (!arr[c])
        {
            ans += c;
            arr[c] = true;
        }
    }

    cout << ans;
}