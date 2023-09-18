#include <bits/stdc++.h>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person()
    {
        cout << "Default constructor is called" << endl;
    }

    void setName(const string &a)
    {
        name = a;
    }
    void setAge(const int &a)
    {
        age = a;
    }

    void display()
    {
        cout << "Name of current object: " << name << endl;
        cout << "Age of current object: " << age << endl;
    }
};

int main()
{
    Person p;
    int age;
    string name;

    getline(cin, name);
    cin >> age;

    p.setAge(age);
    p.setName(name);
    p.display();

    return 0;
}