#include <bits/stdc++.h>
using namespace std;

class UserProfile
{
public:
    string name, email;
    int per;

    void eval(int per)
    {
        if (per >= 0 && per < 25)
        {
            cout << "You are just getting started. Keep it up!" << endl;
        }
        else if (per >= 25 && per < 75)
        {
            cout << "You're making good progress. Keep learning!" << endl;
        }
        else if (per >= 75)
        {
            cout << "Congratulations! You're doing great!" << endl;
        }
    }

    void print(int a)
    {
        cout << "Profile for user " << a + 1 << ":" << endl;
        cout << "Username: " << name << endl;
        cout << "Email: " << email << endl;
        cout << "Learning Progress: " << per << "%" << endl;
        eval(per);
    }
};

int main()
{
    int n;
    cin >> n;

    UserProfile up[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, up[i].name);

        getline(cin, up[i].email);
        cin >> up[i].per;
    }

    for (int i = 0; i < n; i++)
    {
        up[i].print(i);
        cout << endl;
    }
}