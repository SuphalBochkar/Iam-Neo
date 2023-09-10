#include <bits/stdc++.h>
using namespace std;

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
    return 0;
}

