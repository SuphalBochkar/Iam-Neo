#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Shape
{
public:
    virtual void displayDetails() const = 0;
    virtual T area() const = 0;
};

template <typename T>
class Circle : public Shape<T>
{
private:
    T radius;
    T x, y;

public:
    Circle(T r, T x, T y) : radius(r), x(x), y(y) {}

    void displayDetails() const override
    {
        cout << "Circle Details:" << endl;
        cout << "Circle with radius: " << radius << endl;
        cout << "Area: " << area() << endl;
    }

    T area() const override
    {
        return M_PI * radius * radius;
    }
};

template <typename T>
class Cube : public Shape<T>
{
private:
    T side;
    T x, y, z;

public:
    Cube(T s, T x, T y, T z) : side(s), x(x), y(y), z(z) {}

    void displayDetails() const override
    {
        cout << "Cube Details:" << endl;
        cout << "Cube with side length: " << side << endl;
        cout << "Surface area: " << area() << endl;
    }

    T area() const override
    {
        return 6 * side * side;
    }
};

int main()
{
    int shapeType;
    cin >> shapeType;

    if (shapeType == 1)
    {
        double radius, x, y;
        cin >> radius >> x >> y;
        Circle<double> circle(radius, x, y);
        circle.displayDetails();
    }
    else if (shapeType == 2)
    {
        double side, x, y, z;
        cin >> side >> x >> y >> z;
        Cube<double> cube(side, x, y, z);
        cube.displayDetails();
    }
    else
    {
        cout << "Invalid shape type selected." << endl;
    }

    return 0;
}
