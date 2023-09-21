#include <bits/stdc++.h>
using namespace std;

class Box
{
private:
    double width;
    double height;
    double depth;

public:
    Box() : width(0.0), height(0.0), depth(0.0) {}

    Box(double w, double h, double d) : width(w), height(h), depth(d) {}

    Box(double len) : width(len), height(len), depth(len) {}

    double volume() const
    {
        return width * height * depth;
    }
};

int main()
{
    double w, h, d, len;
    cin >> w >> h >> d >> len;

    Box myBox1;
    Box myBox2(w, h, d);
    Box myCube(len);

    cout << "Volume of mybox1 is " << myBox1.volume() << endl;
    cout << "Volume of mybox2 is " << myBox2.volume() << endl;
    cout << "Volume of mycube is " << myCube.volume() << endl;

    return 0;
}
