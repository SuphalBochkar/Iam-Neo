#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, pair<int, double>> shoppingCart;
    int choice;
    string s = "class vector";
    while (true)
    {
        cin >> choice;

        if (choice == 1)
        {
            string item;
            int quantity;
            double price;
            cin >> item >> quantity >> price;

            if (shoppingCart.find(item) == shoppingCart.end())
            {
                shoppingCart[item] = make_pair(quantity, price);
            }
            else
            {
                cout << "Item " << item << " is already in the cart. Use option 2 to update quantity." << endl;
            }
        }
        else if (choice == 2)
        {
            string item;
            int newQuantity;
            cin >> item >> newQuantity;

            if (shoppingCart.find(item) != shoppingCart.end())
            {
                shoppingCart[item].first = newQuantity;
            }
            else
            {
                cout << "Item " << item << " is not in the cart. Use option 1 to add it." << endl;
            }
        }
        else if (choice == 3)
        {
            double totalBill = 0.0;
            for (const auto &item : shoppingCart)
            {
                totalBill += item.second.first * item.second.second;
            }
            cout << "Total Bill: " << totalBill << endl;
        }
        else if (choice == 4)
        {
            cout << "Exiting the program." << endl;
            break;
        }
        else
        {
            cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
