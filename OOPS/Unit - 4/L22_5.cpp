#include <bits/stdc++.h>
using namespace std;

class Distance
{
public:
    int feet, inch;
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }
    void operator-()
    {
        feet--;
        inch--;
        cout << feet << "'" << inch;
    }
};
int main()
{
    int feetInput, inchInput;
    cin >> feetInput;
    cin >> inchInput;
    Distance d1(feetInput, inchInput);
    -d1;
    return 0;
}