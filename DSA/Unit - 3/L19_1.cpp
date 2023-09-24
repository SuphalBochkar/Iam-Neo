#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> staff;
    unordered_set<int> worker;

    int id;
    cin >> id;

    while (id != -1)
    {
        if (worker.find(id) == worker.end())
        {
            staff.push_back(id);
            worker.insert(id);
        }
        cin >> id;
    }

    while (!staff.empty())
    {
        cout << staff.front() << " ";
        staff.pop_front();
    }

    cout << endl;

    return 0;
}
