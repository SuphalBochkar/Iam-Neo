#include <bits/stdc++.h>
using namespace std;

class Person
{
protected:
    char pname[50], address[100];
    int phone_no;
};
class Employee : public Person
{
public:
    int eno;
    char ename[50];
};
class Manager : public Employee
{
public:
    char designation[50], deptname[100];
    float basic_salary;

public:
    void accept_details()
    {
        cin >> eno;
        cin >> ename;
        cin >> address;
        cin >> phone_no;
        cin >> deptname;
        cin >> basic_salary;
    }
};
int main()
{
    int i, cnt, temp;
    Manager man[100];
    cin >> cnt;
    for (i = 1; i <= cnt; i++)
    {
        man[i].accept_details();
    }
    temp = 0;
    for (i = 1; i <= cnt; i++)
    {
        if (man[temp].basic_salary < man[i].basic_salary)
            temp = i;
    }
    cout << "Manager with Highest Salary is : " << man[temp].basic_salary;
    cout << "\nManager Name is : " << man[temp].ename;
    return 0;
}