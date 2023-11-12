#include <iostream>
using namespace std;
class Furniture
{
public:
    double price;
    string material;
    void setInfo(double price, string material)
    {
        this->price = price;
        this->material = material;
    }
    virtual void displayInfo() const
    {
        cout << "Price: $" << price << endl;
        cout << "Material: " << material << endl;
    }
};
class Chair : public Furniture
{
public:
    bool isReclining;
    void setInfo(double price, string material, bool isReclining)
    {
        Furniture::setInfo(price, material);
        this->isReclining = isReclining;
    }
    void displayInfo() const override
    {
        Furniture::displayInfo();
        cout << "Chair Type: " << (isReclining ? "Reclining" : "Standard") << endl;
    }
};
class Bookshelf : public Furniture
{
public:
    int numShelves;
    void setInfo(double price, string material, int numShelves)
    {
        Furniture::setInfo(price, material);
        this->numShelves = numShelves;
    }
    void displayInfo() const override
    {
        Furniture::displayInfo();
        cout << "Number of Shelves: " << numShelves << endl;
    }
};
int main()
{
    double price;
    string material;
    char type;
    cin >> price;
    cin >> material;
    cin >> type;
    if (type == 'C')
    {
        bool isReclining;
        cin >> isReclining;
        Chair chair;
        chair.setInfo(price, material, isReclining);
        chair.displayInfo();
    }
    else if (type == 'T')
    {
        Furniture furniture;
        furniture.setInfo(price, material);
        furniture.displayInfo();
    }
    else if (type == 'B')
    {
        int numShelves;
        cin >> numShelves;
        Bookshelf bookshelf;
        bookshelf.setInfo(price, material, numShelves);
        bookshelf.displayInfo();
    }
    else
    {
        cout << "Invalid type!";
    }
    return 0;
}