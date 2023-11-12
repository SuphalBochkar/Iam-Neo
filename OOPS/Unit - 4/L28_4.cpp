#include <bits/stdc++.h>
using namespace std;

class ItemDetails
{
public:
    string itemName;
    int itemNumber;
    float itemPrice;

    void setItemDetails(string name, int number, float price)
    {
        itemName = name;
        itemNumber = number;
        itemPrice = price;
    }

    void displayItemDetails()
    {
        cout << "1. Item Name: " << itemName << endl;
        cout << "2. Item No.: " << itemNumber << endl;
        cout << "3. Item Price: " << itemPrice << endl;
    }
};

class DiscountDetails
{
public:
    int discountPercent;

    void setDiscountDetails(int percent)
    {
        discountPercent = percent;
    }

    void displayDiscountDetails()
    {
        cout << "4. Discount Percent: " << discountPercent << endl;
    }
};

class DiscountedItem : public ItemDetails, public DiscountDetails
{
public:
    float calculateDiscountedPrice()
    {
        float discountAmount = itemPrice * discountPercent / 100;
        return itemPrice - discountAmount;
    }

    void displayDiscountedItemDetails()
    {
        displayItemDetails();
        displayDiscountDetails();
        cout << "5. Discounted Price: " << calculateDiscountedPrice() << endl;
    }
};

int main()
{
    int numItems;
    cin >> numItems;

    vector<DiscountedItem> items(numItems);

    for (int i = 0; i < numItems; i++)
    {
        string name;
        int number;
        float price;
        int discountPercent;

        cin >> name;
        cin >> number;
        cin >> price;
        cin >> discountPercent;

        items[i].setItemDetails(name, number, price);
        items[i].setDiscountDetails(discountPercent);
    }

    cout << endl;

    for (int i = 0; i < numItems; i++)
    {
        cout << "Details of item " << i + 1 << " :" << endl;
        items[i].displayDiscountedItemDetails();
        cout << endl;
    }

    float totalPrice = 0;
    float totalDiscount = 0;

    for (int i = 0; i < numItems; i++)
    {
        totalPrice += items[i].itemPrice;
        totalDiscount += items[i].itemPrice - items[i].calculateDiscountedPrice();
    }

    cout << "Total Price: " << totalPrice << endl;
    cout << "Total Discount: " << totalDiscount << endl;

    return 0;
}

