#include <bits/stdc++.h>
using namespace std;

int add(int a)
{
    return a;
}

int main()
{

    string word;
    cin >> word;

    if (word == "int")
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            int a;
            cin >> a;

            cout << sum + a << endl;
            sum += a;
        }
    }
    else if (word == "str")
    {

        string key = "";
        for (int i = 0; i < 3; i++)
        {
            string ans;
            cin >> ans;

            cout << key << ans << endl;
            key += ans;
        }
    }
}