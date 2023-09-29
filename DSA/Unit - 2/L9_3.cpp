#include <bits/stdc++.h>
using namespace std;

struct node
{
    char data;
    node *next;
};
void addLast(node *&list, char a);
void addPos(node *&list, char c, int pos);
void display(node *list);

int main()
{
    int n;
    cin >> n;

    node *list = nullptr;
    char a;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        addLast(list, a);
    }

    int pos;
    cin >> pos;
    char c;
    cin >> c;

    if (!(pos >= 0 && pos <= n - 1))
    {
        cout << "Invalid index." << endl;
    }
    else
    {
        addPos(list, c, pos);
    }

    cout << "Updated list: ";
    display(list);

    return 0;
}

void addLast(node *&list, char a)
{
    node *n = new node;
    n->data = a;
    n->next = nullptr;

    if (list == nullptr)
    {
        list = n;
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

void addPos(node *&list, char c, int pos)
{
    node *n = new node;
    n->data = c;
    n->next = nullptr;

    // if (pos == 0)
    // {
    //     n->next = list;
    //     list = n;
    //     return;
    // }

    node *ptr = list;
    for (int i = 0; i < pos; i++)
    {
        ptr = ptr->next;
    }

    n->next = ptr->next;
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