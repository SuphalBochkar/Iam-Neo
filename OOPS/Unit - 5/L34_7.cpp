#include <bits/stdc++.h>
using namespace std;

class Fruit
{
public:
    virtual string getTaste()
    {
        return "Generic fruit taste";
    }
};

class Apple : public Fruit
{
public:
    string getTaste() override
    {
        return "Sweet";
    }
};

class Banana : public Fruit
{
public:
    string getTaste() override
    {
        return "Creamy";
    }
};

class Orange : public Fruit
{
public:
    string getTaste() override
    {
        return "Tangy";
    }
};

class Grape : public Fruit
{
public:
    string getTaste() override
    {
        return "Juicy";
    }
};
class Pineapple : public Fruit
{
public:
    string getTaste() override
    {
        return "Sweet and Sour";
    }
};
int main()
{

    int choice;
    Fruit *fruit;
    cin >> choice;
    switch (choice)
    {
    case 1:
        fruit = new Apple();
        break;
    case 2:
        fruit = new Banana();
        break;
    case 3:
        fruit = new Orange();
        break;
    case 4:
        fruit = new Grape();
        break;
    case 5:
        fruit = new Pineapple();
        break;
    default:
        cout << "Invalid choice, defaulting to generic fruit." << endl;
        fruit = new Fruit();
        break;
    }
    cout << "The taste of the fruit is: " << fruit->getTaste() << endl;
    delete fruit;
    return 0;
}
