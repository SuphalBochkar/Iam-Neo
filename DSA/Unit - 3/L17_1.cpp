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
        cout << "Customer ID " << a << " is enqueued." << endl;
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

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
        }
        else
        {
            node *temp = front;
            cout << "Dequeued customer ID: " << front->data << endl;
            front = front->next;
            delete temp;
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
        }
        else
        {
            cout << "Customer IDs in the queue are: ";
            node *temp = front;
            while (temp != nullptr)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }

    bool isEmpty()
    {
        return front == nullptr;
    }
};

int main()
{
    Sol s;

    int choice, a;
    while (cin >> choice)
    {
        switch (choice)
        {
        case 1:
            cin >> a;
            s.enqueue(a);
            break;
        case 2:
            s.dequeue();
            break;
        case 3:
            s.display();
            break;
        default:
            cout << "Invalid option." << endl;
            break;
        }
    }

    return 0;
}