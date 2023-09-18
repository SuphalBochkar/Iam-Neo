#include <bits/stdc++.h>
using namespace std;

class Sol
{
public:
    Sol()
    {
        cout << "Constructor called" << endl;
    }
    ~Sol()
    {

        cout << "Destructor called" << endl;
    }
};

int main()
{
    int z;
    cin >> z;

    Sol obj[z];

    for (int i = 0; i < z; i++)
    {
        obj[i];
    }

    return 0;
}