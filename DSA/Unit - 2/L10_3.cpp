#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
    node(int val) : data(val), next(nullptr) {}
};

void addNode(node *&list, int val);
void removeNodes(node *&list, int a, int b);
void display(node *list);

int main()
{
    int n;
    cin >> n;

    node *list = nullptr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        addNode(list, a);
    }

    int a, b;
    cin >> a >> b;

    cout << "Linked List before deletion: ";
    display(list);

    removeNodes(list, a, b);

    cout << "\nLinked List after deletion: ";
    display(list);
}

void addNode(node *&list, int val)
{
    node *n = new node(val);
    if (list == nullptr)
    {
        list = n;
        return;
    }
    else
    {
        node *ptr = list;
        while (ptr->next != nullptr)
        {
            ptr = ptr->next;
        }
        ptr->next = n;
    }
}

void removeNodes(node *&list, int a, int b)
{
    if (!list || a >= b)
    {
        return;
    }

    node dummy(0);
    dummy.next = list;
    node *prev = &dummy;
    node *current = list;
    int position = 1;

    while (position < a)
    {
        prev = current;
        current = current->next;
        position++;
    }

    while (position <= b && current)
    {
        node *temp = current;
        current = current->next;
        prev->next = current;
        delete temp;
        position++;
    }

    if (a == 1)
    {
        list = dummy.next;
    }
}

void display(node *n)
{
    if (n == nullptr)
    {
        cout << "all the elements are deleted";
        return;
    }

    for (node *ptr = n; ptr != nullptr; ptr = ptr->next)
    {
        cout << ptr->data;
        if (ptr->next != nullptr)
        {
            cout << " ";
        }
    }
}
