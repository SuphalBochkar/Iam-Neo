#include <bits/stdc++.h>
using namespace std;

class Distance
{
private:
    float feet;
    float inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0.0;
    }

    Distance(const Distance &d)
    {
        feet = d.feet;
        inches = d.inches;
    }

    void setDist(int ft, float in)
    {
        feet = ft;
        inches = in;
    }

    Distance add(Distance d)
    {
        Distance t;
        t.inches = inches + d.inches;
        t.feet = feet + d.feet;
        if (t.inches >= 12.0)
        {
            t.inches -= 12.0;
            t.feet++;
        }
        return t;
    }

    void disp()
    {
        cout << feet << "\'" << inches << "\" ";
    }
};

int main()
{
    float feet, inches;
    cin >> feet >> inches;

    Distance d1;
    d1.setDist(feet, inches);

    Distance d2(d1);

    Distance d3 = d1.add(d2);

    cout << "distance = ";
    d3.disp();

    return 0;
}
