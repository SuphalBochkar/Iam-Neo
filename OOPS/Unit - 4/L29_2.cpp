#include <iostream>
using namespace std;
class currentBill
{
public:
    virtual double amount() = 0;
};
class Fan : public currentBill
{
public:
    int watts, hrs;
    double amount()
    {
        double t = watts * hrs;
        double a = (t / 1000) * 1.5;
        return a;
    }
};
class Light : public currentBill
{
public:
    int watts, hrs;
    double amount()
    {
        double t = watts * hrs;
        double a = (t / 1000) * 1.5;
        return a;
    }
};
class TV : public currentBill
{
public:
    int watts, hrs;
    double amount()
    {
        double t = watts * hrs;
        double a = (t / 1000) * 1.5;
        return a;
    }
};
int main()
{
    Fan f;
    cin >> f.watts >> f.hrs;
    Light l;
    cin >> l.watts >> l.hrs;
    TV t;
    cin >> t.watts >> t.hrs;
    cout << f.amount() + l.amount() + t.amount();
    return 0;
}