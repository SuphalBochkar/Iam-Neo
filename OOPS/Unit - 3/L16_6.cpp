#include <bits/stdc++.h>
using namespace std;

class Sol
{
public:
    int id, sal;
};

int main()
{
    int n;
    cin >> n;

    Sol s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i].id;
        cin >> s[i].sal;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i].sal >= 20000)
        {
            cout << s[i].id << " " << s[i].sal << endl;
        }
    }
}