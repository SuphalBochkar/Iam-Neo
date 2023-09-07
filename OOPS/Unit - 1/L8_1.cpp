#include <bits/stdc++.h>
using namespace std;

int power(int *b, int *p)
{
    int pro = 1;
    for (int i = 0; i < *p; i++)
    {
        pro *= *b;
    }
    return pro;
}

int main()
{

    int b, p;
    cin >> b >> p;

    cout << power(&b, &p);
}