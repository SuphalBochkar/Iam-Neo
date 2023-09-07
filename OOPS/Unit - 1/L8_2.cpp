#include <bits/stdc++.h>
using namespace std;

int sum1(int a, int b)
{
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    sum1(a, b);
    return 0;
}