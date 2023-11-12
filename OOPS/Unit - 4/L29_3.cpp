#include <bits/stdc++.h>
using namespace std;
class ItemType
{
public:
    virtual double calculateAmount() = 0;
};
class wooden : public ItemType
{
    int noOfItems;
    double cost;

public:
    int get()
    {
        cin >> noOfItems >> cost;
    }
    double calculateAmount()
    {
        return noOfItems * cost;
    }
};
class electronics : public ItemType
{
    double cost;

public:
    int get()
    {
        cin >> cost;
    }
    double calculateAmount()
    {
        double discount = cost * 0.20;
        return (cost - discount);
    }
};
int main()
{
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        wooden w;
        w.get();
        cout << fixed << setprecision(2) << w.calculateAmount();
    }
    if (choice == 2)
    {
        electronics e;
        e.get();
        cout << fixed << setprecision(2) << e.calculateAmount();
    }
}