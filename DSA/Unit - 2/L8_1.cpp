#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void addFirst(node *&list, int a);
void addLast(node *&list, int key);
void display(node *n);

int main()
{
    int n;
    cin >> n;

    node *list = nullptr;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        addFirst(list, a);
    }

    cout << "Created Linked list: ";
    display(list);

    int key;
    cin >> key;
    addLast(list, key);

    cout << "\nFinal list: ";
    display(list);

    return 0;
}

void addFirst(node *&list, int a)
{
    node *n = new node;

    n->data = a;
    n->next = nullptr;

    if (list == nullptr)
    {
        list = n;
        return;
    }
    else
    {
        n->next = list;
        list = n;
    }
}

void addLast(node *&list, int key)
{
    node *n = new node;
    n->data = key;
    n->next = nullptr;

    node *ptr = list;
    while (ptr->next != nullptr)
    {
        ptr = ptr->next;
    }

    ptr->next = n;
}

void display(node *n)
{
    for (node *ptr = n; ptr != nullptr; ptr = ptr->next)
    {
        cout << ptr->data;
        if (ptr->next != nullptr)
        {
            cout << " ";
        }
    }
}