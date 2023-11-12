#include <bits/stdc++.h>
using namespace std;

class FullName
{
private:
    string fName;
    string lName;

public:
    FullName(const string &first, const string &last) : fName(first), lName(last) {}

    string getFullName() const
    {
        return fName + " " + lName;
    }
};

int main()
{
    string fName;
    string lName;

    getline(cin, fName);
    getline(cin, lName);

    FullName fullName(fName, lName);
    cout << fullName.getFullName() << endl;

    return 0;
}
