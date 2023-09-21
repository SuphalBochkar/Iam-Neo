#include <bits/stdc++.h>
using namespace std;

#define SIZE 100

class Sol
{
public:
    int front = 0, rear = -1;
    int queue[SIZE];

    void enqueue(int val)
    {
        if (rear == SIZE - 1)
        {
            return;
        }
        else
        {
            queue[++rear] = val;
        }
    }

    void revQueue(int k)
    {
        if (k > rear - front + 1)
        {
            return;
        }

        stack<int> s;
        for (int i = 0; i < k; i++)
        {
            s.push(queue[front + i]);
        }

        for (int i = 0; i < k; i++)
        {
            queue[front + i] = s.top();
            s.pop();
        }
    }

    void display()
    {
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Sol s;

    int n, rev, a;
    cin >> n >> rev;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        s.enqueue(a);
    }

    s.revQueue(rev);
    s.display();
    return 0;
}
