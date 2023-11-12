#include <bits/stdc++.h>
using namespace std;

class Icecream
{
public:
    virtual float Quantity() = 0;
};
class SphereIcecream : public Icecream
{
private:
    int radius;
public:
    SphereIcecream(int r) : radius(r) {}
    float Quantity() override
    {
        return 4.0 / 3.0 * M_PI * pow(radius, 3);
    }
};

class ConeIcecream : public Icecream
{
private:
    int radius;
    int height;
public:
    ConeIcecream(int r, int h) : radius(r), height(h) {}
    float Quantity() override
    {
        return 0.33 * M_PI * pow(radius, 2) * height;
    }
};

int main()
{
    Icecream *obj;
    int choice, r, h;
    cin >> choice;
    if (choice == 1)
    {
        cin >> r;
        obj = new SphereIcecream(r);
    }
    else if (choice == 2)
    {
        cin >> r >> h;
        obj = new ConeIcecream(r, h);
    }
    else
    {
        // cout << "Invalid choice!";
        return 0;
    }
    cout << fixed << setprecision(2);
    cout << obj->Quantity();
    delete obj;
    return 0;
}
