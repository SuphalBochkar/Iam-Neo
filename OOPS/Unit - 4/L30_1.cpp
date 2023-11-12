#include <bits/stdc++.h>
using namespace std;

class Shape
{
public:
    Shape(string _name) : name(_name)
    {
        cout << "Shape Constructor: Creating a shape - " << name << endl;
    }
    virtual ~Shape()
    {
        cout << "Shape Destructor: Destroying a shape - " << name << endl;
    }
    virtual double area()
    {
        return 0.0;
    }
    string getName()
    {
        return name;
    }

private:
    string name;
};
class Circle : public Shape
{
public:
    Circle(string _name, double _radius) : Shape(_name), radius(_radius)
    {
        cout << "Circle Constructor: Creating a circle - " << getName() << endl;
    }
    ~Circle()
    {
        cout << "Circle Destructor: Destroying a circle - " << getName() << endl;
    }
    double area() override
    {
        return 3.14 * radius * radius;
    }

private:
    double radius;
};
class Square : public Shape
{
public:
    Square(string _name, double _side) : Shape(_name), side(_side)
    {
        cout << "Square Constructor: Creating a square - " << getName() << endl;
    }
    ~Square()
    {
        cout << "Square Destructor: Destroying a square - " << getName() << endl;
    }
    double area() override
    {
        return side * side;
    }

private:
    double side;
};
int main()
{
    string shapeName;
    double radius, side;
    cin >> shapeName;
    cin >> radius;
    Circle myCircle(shapeName, radius);
    cin >> shapeName;
    cin >> side;
    Square mySquare(shapeName, side);
    cout << fixed << setprecision(2);
    cout << "Area of " << myCircle.getName() << ": " << myCircle.area() << endl;
    cout << "Area of " << mySquare.getName() << ": " << mySquare.area() << endl;
    return 0;
}