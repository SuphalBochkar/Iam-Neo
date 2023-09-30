#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    deque<int> elements(N);

    for (int i = 0; i < N; i++)
    {
        cin >> elements[i];
    }

    for (int i = 0; i < N; i += 2)
    {
        cout << elements[i] << " ";
    }

    cout << endl;

    return 0;
}
