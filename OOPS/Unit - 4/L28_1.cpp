#include <bits/stdc++.h>
using namespace std;

class Bicycle
{
protected:
    int gears;
    int speed;

public:
    Bicycle(int g, int s) : gears(g), speed(s) {}

    void displayInfo()
    {
        cout << gears << " " << speed << endl;
    }
};

class MountainBike : public Bicycle
{
private:
    int height;

public:
    MountainBike(int g, int s, int h) : Bicycle(g, s), height(h) {}

    void displayInfo()
    {
        Bicycle::displayInfo();
        cout << height << endl;
    }
};

int main()
{
    int g, s, h;
    cin >> g >> s >> h;

    MountainBike mb(g, s, h);
    mb.displayInfo();

    return 0;
}
