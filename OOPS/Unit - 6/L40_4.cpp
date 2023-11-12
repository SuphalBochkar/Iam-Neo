#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Vehicle
{
public:
    string make;
    string model;
    int year;
    double rentalPrice;

    Vehicle(const string &make, const string &model, int year, double rentalPrice)
        : make(make), model(model), year(year), rentalPrice(rentalPrice) {}
};

class Car : public Vehicle<Car>
{
public:
    int numDoors;

    Car(const string &make, const string &model, int year, double rentalPrice, int numDoors)
        : Vehicle<Car>(make, model, year, rentalPrice), numDoors(numDoors) {}

    void displayDetails() const
    {
        cout << make << " " << model << " " << year << " " << rentalPrice << endl;
        cout << numDoors << endl;
    }
};

class Motorcycle : public Vehicle<Motorcycle>
{
public:
    string type;

    Motorcycle(const string &make, const string &model, int year, double rentalPrice, const string &type)
        : Vehicle<Motorcycle>(make, model, year, rentalPrice), type(type) {}

    void displayDetails() const
    {
        cout << make << " " << model << " " << year << " " << rentalPrice << endl;
        cout << type << endl;
    }
};

int main()
{
    string makeCar, modelCar;
    int yearCar, numDoors;
    double rentalPriceCar;

    string makeMotorcycle, modelMotorcycle, type;
    int yearMotorcycle;
    double rentalPriceMotorcycle;

    cin >> makeCar >> modelCar >> yearCar >> rentalPriceCar >> numDoors;
    cin >> makeMotorcycle >> modelMotorcycle >> yearMotorcycle >> rentalPriceMotorcycle >> type;

    Car car(makeCar, modelCar, yearCar, rentalPriceCar, numDoors);
    Motorcycle motorcycle(makeMotorcycle, modelMotorcycle, yearMotorcycle, rentalPriceMotorcycle, type);

    cout << "Vehicle Details:" << endl;
    car.displayDetails();
    motorcycle.displayDetails();

    string s = "template <class T> class";

    return 0;
}
