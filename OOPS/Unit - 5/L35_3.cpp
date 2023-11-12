#include <bits/stdc++.h>
using namespace std;

class Acc
{
public:
    virtual void display() = 0;
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
};

class savingAcc : public Acc
{
    int accNo;
    double balance;
    string name;

public:
    void get()
    {
        cin >> accNo >> name >> balance;
    }
    void deposit(double amount)
    {
        balance = (balance + amount);
        cout << "Balance after deposit: " << fixed << setprecision(2) << balance << "\n";
    }
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance = (balance - amount);
            cout << "Balance after withdrawal: " << fixed << setprecision(2) << balance << "\n";
        }
        else
        {
            cout << "Insufficient balance for withdrawal!\n";
        }
    }
    void display()
    {
        cout << accNo << " " << name << " " << fixed << setprecision(2) << balance << "\n";
    }
};

int main()
{
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        savingAcc s;
        s.get();
        s.display();

        int option;
        double amount;
        cin >> option;
        if (option == 2)
        {
            cin >> amount;
            s.deposit(amount);
        }
        else if (option == 3)
        {
            cin >> amount;
            s.withdraw(amount);
        }
        else
        {
            cout << "Invalid option\n";
        }

        s.display();
    }
}
