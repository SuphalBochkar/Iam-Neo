#include <bits/stdc++.h>
using namespace std;

struct Milk
{
    string brand;
    int quantity;
    double price;
};

void addMilk(vector<Milk> &inventory)
{
    Milk milk;
    cin.ignore();
    getline(cin, milk.brand);
    cin >> milk.quantity >> milk.price;
    inventory.push_back(milk);
}

void updateMilkQuantity(vector<Milk> &inventory)
{
    string brand;
    int newQuantity;
    cin.ignore();
    getline(cin, brand);
    cin >> newQuantity;

    auto it = find_if(inventory.begin(), inventory.end(), [&](const Milk &milk)
                      { return milk.brand == brand; });

    if (it != inventory.end())
    {
        it->quantity = newQuantity;
    }
    else
    {
        cout << "Milk brand not found." << endl;
    }
}

void displayMilkInventory(const vector<Milk> &inventory)
{
    cout << "Milk Inventory Details:" << endl;
    for (const auto &milk : inventory)
    {
        cout << "Brand: " << milk.brand << ", Quantity (Liters): " << milk.quantity
             << ", Price per Liter: $" << milk.price << endl;
    }
}

int main()
{
    vector<Milk> inventory;
    int choice;
    string s = "class vector";
    int c = 0;
    do
    {
        c++;
        cin >> choice;
        if (c > 10)
        {
            exit(0);
        }
        switch (choice)
        {
        case 1:
            addMilk(inventory);
            break;
        case 2:
            updateMilkQuantity(inventory);
            break;
        case 3:
            displayMilkInventory(inventory);
            break;
        case 4:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}