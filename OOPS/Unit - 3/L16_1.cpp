#include <bits/stdc++.h>
using namespace std;

int main()
{
    float de = 0.05;
    float d_de = 0.5;
    float c_de;
    int amt;
    cin >> c_de;
    cin >> amt;

    cout << "The amount of sales tax is " << de * amt;
    cout << endl;
    cout << "The total of the sale is " << (de * amt) + amt;
    cout << endl;
    cout << "The amount of sales tax with custom TAX RATE is " << c_de * amt;
    cout << endl;
    cout << "The total of the sale is " << (c_de * amt) + amt;
    cout << endl;
    cout << "The amount of sales tax with default tax rate is " << d_de * amt;
    cout << endl;
    cout << "The total of the sale is " << (d_de * amt) + amt;
    cout << endl;

    return 0;
}