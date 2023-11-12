#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    string eName;
    string eID;
    double Salary;

public:
    Employee() {}

    Employee(const string &name, const string &id, double salary)
        : eName(name), eID(id), Salary(salary) {}

    double calculateAnnualSalary() const
    {
        return Salary * 12;
    }

    void giveRaise(double percentage)
    {
        Salary += Salary * (percentage / 100);
    }

    void displayEmployeeDetails() const
    {
        cout << "Employee Name: " << eName << endl;
        cout << "Employee ID: " << eID << endl;
        cout << "Monthly Salary: $" << fixed << setprecision(2) << Salary << endl;
        cout << "Annual Salary: $" << fixed << setprecision(2) << calculateAnnualSalary() << endl;
    }
};

int main()
{
    string name, id;
    double Salary;
    getline(cin, name);
    getline(cin, id);
    cin >> Salary;
    Employee emp(name, id, Salary);
    emp.displayEmployeeDetails();
    double raisePercentage;
    cin >> raisePercentage;
    emp.giveRaise(raisePercentage);
    emp.displayEmployeeDetails();
    return 0;
}