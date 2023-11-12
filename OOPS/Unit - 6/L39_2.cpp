#include <bits/stdc++.h>
using namespace std;

template <typename T>
T maxValue(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    int int1, int2;
    double double1, double2;

    cin >> int1 >> int2 >> double1 >> double2;

    int maxInt = maxValue(int1, int2);
    double maxDouble = maxValue(double1, double2);

    cout << "Maximum value: " << maxInt << endl;
    cout << "Maximum value: " << maxDouble << endl;

    string s = "template<class T>";
    return 0;
}
