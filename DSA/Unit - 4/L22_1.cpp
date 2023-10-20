#include <bits/stdc++.h>
using namespace std;

void towerOfHanoiMoves(int n, char source, char destination, char auxiliary, int &total_moves)
{
    if (n > 0)
    {
        total_moves++;
        towerOfHanoiMoves(n - 1, source, auxiliary, destination, total_moves);
        cout << "Move disk " << n << " from " << source << " to " << destination << endl;
        towerOfHanoiMoves(n - 1, auxiliary, destination, source, total_moves);
    }
}

int main()
{
    int n;
    cin >> n;

    int total_moves = 0;
    towerOfHanoiMoves(n, 'A', 'B', 'C', total_moves);

    cout << "Total number of times the disk is moved: " << total_moves << endl;

    return 0;
}
