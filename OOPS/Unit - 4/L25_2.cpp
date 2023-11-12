// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     cout << a - b;
// }

#include <bits/stdc++.h>
using namespace std;

class Sol
{
private:
    int bal;

public:
    Sol(int initial) : bal(initial) {}

    int getbal() const
    {
        return bal;
    }

    void withdraw(int amount)
    {
        bal -= amount;
    }
};

int main()
{
    int initial;
    int draw;

    Sol account(initial);
    account.withdraw(draw);

    cout << account.getbal() << endl;

    return 0;
}
