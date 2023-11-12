#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    try
    {
        if (a != 0 && b != 0)
            cout << a / b;
        else
            throw("hi");
    }
    catch (const char *a)
    {
        if (a == "hi")
            cout << "Divide by Zero Exception" << endl;
    }
}