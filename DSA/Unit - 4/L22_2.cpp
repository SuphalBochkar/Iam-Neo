#include <bits/stdc++.h>
using namespace std;

long long power(long long a, long long b)
{
    if (b == 0)
        return 1;

    return a * power(a, b - 1);
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long a, b;
        cin >> a >> b;

        long long result = power(a, b);
        cout << result << endl;
    }

    return 0;
}
