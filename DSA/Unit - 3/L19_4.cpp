#include <bits/stdc++.h>
using namespace std;

class Sol
{
public:
    deque<int> market;
    int num = 0;

    void process()
    {
        int stock;
        cin >> stock;

        while (stock != -1)
        {
            num++;
            market.push_back(stock);
            cin >> stock;
        }
    }

    void no()
    {
        cout << "Number of elements in the deque: " << num << endl;
    }
};

int main()
{
    Sol s;
    s.process();
    s.no();
    return 0;
}
