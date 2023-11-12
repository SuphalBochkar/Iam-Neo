#include <bits/stdc++.h>
using namespace std;

class Sol
{
public:
    double a, b;
    Sol(double x, double y) : a(x), b(y) {}

    operator double()
    {
        return a * b;
    }

    void display()
    {
        cout << "Converted amount in Euros (EUR): " << fixed << setprecision(2) << static_cast<double>(*this) << " EUR" << endl;
    }
};

int main()
{

    double a, b;
    cin >> a >> b;

    Sol s(a, b);

    s.display();
    return 0;
}