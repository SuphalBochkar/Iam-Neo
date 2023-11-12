#include <bits/stdc++.h>
using namespace std;

class Sol
{
public:
    int code;
    int qua;
    double per;
    Sol(int a, int b, double c) : code(code), qua(b), per(c) {}

    operator double()
    {
        return qua * per;
    }

    void display()
    {
        cout << "Total Price of the Stock: " << fixed << setprecision(2) << static_cast<double>(*this) << endl;
    }
};

int main()
{
    int a;
    int b;
    double c;

    cin >> a >> b >> c;
    Sol s(a, b, c);

    s.display();

    return 0;
}