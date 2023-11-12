#include <bits/stdc++.h>
using namespace std;

class Car
{
private:
    string make;
    string model;
    int year;

public:
    Car(const string &make, const string &model, int year) : make(make), model(model), year(year) {}

    const string &getMake() const
    {
        return make;
    }

    const string &getModel() const
    {
        return model;
    }

    int getYear() const
    {
        return year;
    }

    virtual int findSpeed()
    {
        return 0;
    }
};

class SportsCar : public Car
{
private:
    int maxSpeed;

public:
    SportsCar(const string &make, const string &model, int year, int maxSpeed) : Car(make, model, year), maxSpeed(maxSpeed) {}

    int findSpeed() override
    {
        return maxSpeed;
    }
};

int main()
{
    string make, model;
    int year, maxSpeed;

    getline(cin, make);
    getline(cin, model);
    cin >> year;
    cin >> maxSpeed;

    Car genericCar(make, model, year);
    SportsCar sportsCar(make, model, year, maxSpeed);

    cout << "Make of the car is: " << genericCar.getMake() << endl;
    cout << "Model of the car is: " << genericCar.getModel() << endl;
    cout << "Year of the car is: " << genericCar.getYear() << endl;
    cout << "Speed of the sports car is: " << sportsCar.findSpeed() << " km/h" << endl;

    return 0;
}
