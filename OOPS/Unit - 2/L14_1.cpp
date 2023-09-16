#include <bits/stdc++.h>
using namespace std;

class MultiplicationGame
{
public:
    void game(int n)
    {
        int p = 1;
        bool johnTurn = true;

        while (p < n)
        {
            if (johnTurn)
            {
                int nextNumber = (p <= 9) ? p + 1 : 2;
                p *= nextNumber;
            }
            else
            {
                p *= 2;
            }

            johnTurn = !johnTurn;
        }

        cout << n << " " << (johnTurn ? "John wins" : "Michael wins") << endl;
    }
};

int main()
{
    int n;
    cin >> n;

    MultiplicationGame game;
    game.game(n);

    return 0;
}
