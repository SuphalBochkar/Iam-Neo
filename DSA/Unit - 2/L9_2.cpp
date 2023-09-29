#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void sortAdd(node *&list, int a);
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
        addLast(list, a);
    }

    cout << "Original data points: ";
    display(list);
    cout << endl;

    int a;
    cin >> a;
    sortAdd(list, a);

    cout << "Updated data points: ";
    display(list);
    return 0;
}

void sortAdd(node *&list, int key)
{
    node *n = new node;
    n->data = key;
    n->next = nullptr;

    if (list == nullptr || key <= list->data)
    {
        n->next = list;
        list = n;
        return;
    }
    node *ptr = list;
    while (ptr->next != nullptr)
    {
        if (ptr->data <= key && ptr->next->data >= key)
        {
            n->next = ptr->next;
            ptr->next = n;
            return;
        }
        ptr = ptr->next;
    }
    ptr->next = n;
}

void addLast(node *&list, int key)
{
    node *n = new node;
    n->data = key;
    n->next = nullptr;

    if (list == nullptr)
    {
        list = n;
        return;
    }

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