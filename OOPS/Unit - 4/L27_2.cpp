#include <bits/stdc++.h>
using namespace std;

class Welcome
{
public:
    Welcome()
    {
        cout << "Welcome!! Hi, ";
    }
};

class Hello : public Welcome
{
public:
    Hello(const string &name)
    {
        cout << name << endl;
    }
};

int main()
{
    string name;
    cin >> name;

    Hello hello(name);

    return 0;
}
