#include <bits/stdc++.h>
using namespace std;

class Product
{
public:
    string name;
    int a, b, c;

    void setData()
    {
        cin >> name;
        cin >> a >> b >> c;
    }

    void outData()
    {
        cout << "Product Name: " << name << endl;
        cout << "Total items: " << int(a + b + c + c) << endl;
    }
};

int main()
{
    Product pd;
    pd.setData();
    pd.outData();
}