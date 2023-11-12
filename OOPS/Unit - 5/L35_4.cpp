#include <iostream>

using namespace std;

class CB
{
public:
    virtual double amount() = 0;
};

class Fan : public CB
{
public:
    int w, h;
    double amount()
    {
        double t = w * h;
        double a = (t / 1000) * 1.5;
        return a;
    }
};

class Light : public CB
{
public:
    int w, h;
    double amount()
    {
        double t = w * h;
        double a = (t / 1000) * 1.5;
        return a;
    }
};
class TV : public CB
{
public:
    int w, h;
    double amount()
    {
        double t = w * h;
        double a = (t / 1000) * 1.5;
        return a;
    }
};
int main()
{
    Fan f;
    cin >> f.w >> f.h;
    Light l;
    cin >> l.w >> l.h;
    TV t;
    cin >> t.w >> t.h;
    cout << f.amount() + l.amount() + t.amount();
    return 0;
}
