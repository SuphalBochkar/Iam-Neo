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
public:
    node *front;
    node *rear;
    int size;

    Sol() : front(nullptr), rear(nullptr), size(0) {}

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
        size++;
    }

    bool isEmpty()
    {
        return front == nullptr;
    }
};

bool compare(Sol s1, Sol s2)
{
    if (s1.size != s2.size)
    {
        return false;
    }

    node *temp1 = s1.front;
    node *temp2 = s2.front;

    for (int i = 0; i < s1.size; i++)
    {
        if (temp1->data != temp2->data)
        {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    return true;
}
int main()
{
    Sol s1, s2;

    int n1, n2, a;

    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        cin >> a;
        s1.enqueue(a);
    }

    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        cin >> a;
        s2.enqueue(a);
    }

    if (compare(s1, s2))
    {
        cout << "The queues have the same elements in the same order." << endl;
    }
    else
    {
        cout << "The queues do not have the same elements in the same order." << endl;
    }
    return 0;
}
