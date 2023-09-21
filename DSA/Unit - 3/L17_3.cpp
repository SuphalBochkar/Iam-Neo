#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int val) : data(val), next(nullptr) {}
};

class Sol
{
private:
    node *front;
    node *rear;

public:
    Sol() : front(nullptr), rear(nullptr) {}

    void enqueue(int a)
    {
        node *n = new node(a);
        if (isEmpty())
        {
            front = rear = n;
        }
        else
        {
            rear->next = n;
            rear = n;
        }
    }

    void display()
    {
        node *temp = front;
        while (temp != nullptr)
        {
            cout << deci_bin(temp->data) << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int deci_bin(int i)
    {
        int ans = 0;
        int bitPosition = 1;
        while (i > 0)
        {
            int digit = i % 2;
            ans += digit * bitPosition;
            i /= 2;
            bitPosition *= 10;
        }
        return ans;
    }

    bool isEmpty()
    {
        return front == nullptr;
    }
};

int main()
{
    Sol s;

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        s.enqueue(i);
    }

    s.display();

    return 0;
}
