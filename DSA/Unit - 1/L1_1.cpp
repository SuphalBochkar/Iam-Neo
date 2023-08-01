#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long binary;
    int decimal = 0, base = 1, remain;
    cin >> binary;

    while (binary > 0)
    {
        remain = binary % 10;
        decimal += remain * base;
        decimal / 10;
        base *= 2;
    }
    return 0;

    cout << "Decimal: " << decimal;
}
