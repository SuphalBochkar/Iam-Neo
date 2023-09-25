#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

class Sol
{
private:
    Node *front;
    Node *rear;

public:
    Sol() : front(nullptr), rear(nullptr) {}

    void enqueue(int val)
    {
        Node *newNode = new Node(val);
        if (!front)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue()
    {
        if (!front)
        {
            cout << "Underflow" << endl;
            return;
        }

        Node *temp = front;
        front = front->next;
        delete temp;
    }

    void display()
    {
        if (!front)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        Node *current = front;
        while (current)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    Sol q;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int val;
        cin >> val;
        q.enqueue(val);
    }

    q.dequeue();

    q.display();

    return 0;
}
