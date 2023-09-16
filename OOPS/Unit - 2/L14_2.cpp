#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> mp;

    string airWays, search;
    getline(cin, airWays);

    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string des;
        int num;

        getline(cin, des);
        cin >> num;
        cin.ignore();

        mp[des] = num;
    }

    getline(cin, search);

    if (mp.find(search) != mp.end())
    {
        cout << mp[search] << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}
