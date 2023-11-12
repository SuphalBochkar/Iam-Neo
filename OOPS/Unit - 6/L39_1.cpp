#include <bits/stdc++.h>
using namespace std;

class Child
{
private:
    string name;
    int age;
    long long parentContact;

public:
    Child(const string &name, int age, long long parentContact) : name(name), age(age), parentContact(parentContact) {}

    void displayDetails() const
    {
        cout << "Child Name: " << name << ", Age: " << age << ", Parent's Contact: " << parentContact << endl;
    }
};

int main()
{
    int n;
    cin >> n;

    vector<Child> children;

    for (int i = 0; i < n; ++i)
    {
        string name;
        int age;
        long long parentContact;

        cin >> name >> age >> parentContact;

        children.push_back(Child(name, age, parentContact));
    }

    cout << "Enrolled Children:" << endl;
    for (const Child &child : children)
    {
        child.displayDetails();
    }

    string a = "template";
    return 0;
}
