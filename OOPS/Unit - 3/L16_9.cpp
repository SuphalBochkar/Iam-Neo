#include <bits/stdc++.h>
using namespace std;

class Demo
{
private:
public:
    int n;
    Demo()
    {
        cout << "Inside Constructor" << endl;
    }
    void display()
    {
        cout << "square = " << n * n << endl;
        cout << "square root = " << sqrt(n) << endl;
    }
    ~Demo()
    {
        cout << "Inside Destructor" << endl;
    }
};

int main()
{
    Demo d;
    cin >> d.n;

    d.display();

    return 0;
}