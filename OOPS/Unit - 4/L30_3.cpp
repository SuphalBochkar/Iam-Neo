#include <bits/stdc++.h>
using namespace std;

class partA
{
public:
    string name;
    string pan;
    partA()
    {
        cout << "Creating partA" << endl;
    }
    ~partA()
    {
        cout << "Deleting partA" << endl;
    }
};
class partB : public virtual partA
{
public:
    int grossSalary;
    int incomeFromOtherSources;
    partB()
    {
        cout << "Creating partB" << endl;
    }
    ~partB()
    {
        cout << "Deleting partB" << endl;
    }
};
class partC : public virtual partA
{
public:
    int deductions;
    partC()
    {
        cout << "Creating partC" << endl;
    }
    ~partC()
    {
        cout << "Deleting partC" << endl;
    }
};
class taxComp : public partB, public partC
{
public:
    void computeTax()
    {
        int taxableIncome = grossSalary + incomeFromOtherSources - deductions;
        float tax = 0.30 * taxableIncome;
        cout << "Account Holder Name: " << name << endl;
        cout << "PAN: " << pan << endl;
        cout << "Gross Salary: " << grossSalary << endl;
        cout << "Income from Other Sources: " << incomeFromOtherSources << endl;
        cout << "Deductions: " << deductions << endl;
        cout << "Taxable Income (computed): " << taxableIncome << endl;
        cout << "Tax Payable (computed): " << tax << endl;
    }
    taxComp()
    {
        cout << "Creating taxComp" << endl;
    }
    ~taxComp()
    {
        cout << "Deleting taxComp" << endl;
    }
};
int main()
{
    taxComp tc;
    cin >> tc.name;
    cin >> tc.pan;
    cin >> tc.grossSalary;
    cin >> tc.incomeFromOtherSources;
    cin >> tc.deductions;
    tc.computeTax();
    return 0;
}