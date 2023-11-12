#include <bits/stdc++.h>
using namespace std;

void deposit(double &balance, double amount)
{
    balance += amount;
    cout << "Deposit successful. Balance: " << balance << endl;
}

int main()
{
    double balance = 0.0;
    double amount;

    cin >> amount;

    try
    {
        if (amount > 0)
            deposit(balance, amount);
        else
            throw("hi");
    }
    catch (const char *a)
    {
        if (a == "hi")
        {
            cout << "Exception caught: Error: Cannot deposit a negative amount or zero." << endl;
        }
    }

    return 0;
}
