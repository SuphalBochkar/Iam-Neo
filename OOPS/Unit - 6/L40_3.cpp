#include <bits/stdc++.h>
using namespace std;

struct FoodItem
{
    string name;
    int quantity;
    double price;
};

int main()
{
    vector<FoodItem> order;

    while (true)
    {
        int choice;
        cin >> choice;

        if (choice == 1)
        {
            string name;
            int quantity;
            double price;
            cin >> name >> quantity >> price;

            FoodItem newItem;
            newItem.name = name;
            newItem.quantity = quantity;
            newItem.price = price;

            order.push_back(newItem);
        }
        else if (choice == 2)
        {
            string name;
            int newQuantity;
            cin >> name >> newQuantity;

            bool found = false;
            for (FoodItem &item : order)
            {
                if (item.name == name)
                {
                    item.quantity = newQuantity;
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Item not found in the order." << endl;
            }
        }
        else if (choice == 3)
        {
            double totalBill = 0.0;
            for (const FoodItem &item : order)
            {
                totalBill += item.quantity * item.price;
            }
            cout << "Total Bill: $" << totalBill << endl;
        }
        else if (choice == 4)
        {
            break;
        }
        else
        {
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}
