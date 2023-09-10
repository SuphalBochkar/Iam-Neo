#include <bits/stdc++.h>
using namespace std;

class Product
{
private:
    string name;
    float price;
    int qua;

public:
    void getData(string a, float b, int c)
    {
        name = a;
        price = b;
        qua = c;
    }

    float getPrice()
    {
        return price * qua;
    }

    void details()
    {
        cout << "Product Name: " << name << endl;
        cout << "Total Price: " << fixed << setprecision(2) << getPrice() << endl;
    }
};

int main()
{

    int n;
    cin >> n;
    cin.ignore();

    vector<Product *> cart;

    for (int i = 0; i < n; i++)
    {
        string a;
        float b;
        int c;

        getline(cin, a);
        cin >> b;
        cin >> c;
        cin.ignore();

        Product *pro = new Product;
        pro->getData(a, b, c);
        cart.push_back(pro);
    }

    cout << "Shopping Cart details:" << endl;

    float tot = 0.0;
    for (int i = 0; i < n; i++)
    {
        cart[i]->details();
        tot += cart[i]->getPrice();
    }

    return 0;
}

