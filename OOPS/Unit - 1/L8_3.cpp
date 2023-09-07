#include <bits/stdc++.h>
using namespace std;

int getAllWays(int remainingSum, int power, int base)
{
    if (remainingSum == 0)
    {
        return 1;
    }

    int ways = 0;
    for (int i = base; i <= pow(remainingSum, 1.0 / power); ++i)
    {
        int newSum = remainingSum - pow(i, power);
        if (newSum >= 0)
        {
            ways += getAllWays(newSum, power, i + 1);
        }
    }
    return ways;
}

int main()
{
    int x, n;
    cin >> x >> n;

    int ways = getAllWays(x, n, 1);

    cout << ways << endl;

    return 0;
}
