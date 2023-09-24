#include <bits/stdc++.h>
using namespace std;

class Sol
{
public:
    deque<int> market;
    int mini = INT_MAX;

    void process()
    {
        int stock;
        cin >> stock;

        while (stock != -1)
        {
            mini = min(mini, stock);
            market.push_back(stock);
            cin >> stock;
        }
    }

    void minStock()
    {
        cout << mini << endl;
    }
};

int main()
{
    Sol s;
    s.process();
    s.minStock();
    return 0;
}
