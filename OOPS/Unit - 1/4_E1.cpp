#include <bits/stdc++.h>
using namespace std;

union Customers
{
    string name;
    int acc_no;
    int balance;
}c;

int main()
{
    int n;
    cin >> n;
    union Customers c[n];

    for (int i = 0; i < n; i++)
    {
        cin >> c[i].name >> c[i].acc_no >> c[i].balance;
    }

    for (int i = 0; i < n; i++)
    {
        int a = c[i].balance;
        if (a > 1000)
        {
            cout << a + 100 << " ";
        }
    }
}