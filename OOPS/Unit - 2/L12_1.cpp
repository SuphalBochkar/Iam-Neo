#include <iostream>
using namespace std;

void concatenateStrings(string res, string a, string b)
{
    res = a + b;
    cout << res;
}

int main()
{
    string a, b, res;
    cin >> a;
    cin >> b;

    concatenateStrings(res, a, b);
}
