#include <bits/stdc++.h>
using namespace std;

class Sol
{
private:
    double kilo;
    double miles;

public:
    Sol(double a)
    {
        kilo = a;
        miles = kilo * 0.621371;
    }
    void display()
    {
        cout << "Kilometers: " << fixed << setprecision(2) << kilo << " km" << endl;
        cout << "Miles: " << fixed << setprecision(2) << miles << " miles" << endl;
    }
};

int main()
{
    double a;
    cin >> a;

    Sol s(a);
    s.display();
    return 0;
}

2 + 2 + 1 + 1