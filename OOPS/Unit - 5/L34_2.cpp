#include <bits/stdc++.h>
using namespace std;

int calc(int a)
{
    int s = a * a;
    return s;
}

int calc(int a, int b)
{
    int m = a % b;
    return m;
}

float calc(float a, float b)
{
    float q = a / b;
    return q;
}

int main()
{
    int clac;
    int n1, n2;
    float f1, f2;

    cin >> n1 >> n2 >> f1 >> f2;

    int sResult = calc(n1);
    int mResult = calc(n1, n2);
    float qResult = calc(f1, f2);

    cout << "Square of " << n1 << ": " << sResult << endl;
    cout << "Modulus of " << n1 << ", " << n2 << ": " << mResult << endl;
    cout << "Quotient of " << f1 << ", " << f2 << ": " << fixed << setprecision(2) << qResult << endl;

    return 0;
}
