#include <bits/stdc++.h>
using namespace std;

struct Std
{
    int num;
    int id;

    Std(int a, int b) : num(a), id(b) {}
};

class Sol
{
public:
    queue<Std> list;

    void addPack()
    {
        int num, id;
        cin >> num >> id;

        if (id >= 1 && id <= 10)
        {
            Std student(num, id);
            queue<Std> temp;

            while (!list.empty() && list.front().id <= id)
            {
                temp.push(list.front());
                list.pop();
            }

            temp.push(student);

            while (!list.empty())
            {
                temp.push(list.front());
                list.pop();
            }
            list = temp;
        }
    }

    void display()
    {
        queue<Std> temp = list;

        while (!temp.empty())
        {
            cout << temp.front().num << " ";
            temp.pop();
        }
        cout << endl;
    }
} s;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        s.addPack();
    }

    cout << "Priority Queue: ";
    s.display();

    return 0;
}
