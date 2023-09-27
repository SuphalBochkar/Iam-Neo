#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void addNode(node *&list, int key);
void insert_mid(node *&list, int pos, int key);
void print(node *list);

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

    int pos, key;
    cin >> pos >> key;

    insert_mid(list, pos, key);
    print(list);
    return 0;
}

void addNode(node *&list, int key)
{
    node *n = new node;
    n->data = key;
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

void insert_mid(node *&list, int pos, int key)
{
    node *n = new node;
    n->data = key;
    n->next = nullptr;

    if (pos == 1)
    {
        n->next = list;
        list = n;
        return;
    }

    node *ptr = list;
    int c = 1;
    while (c != pos - 1 && ptr != nullptr)
    {
        c++;
        ptr = ptr->next;
    }

    n->next = ptr->next;
    ptr->next = n;
}

void print(node *list)
{
    for (node *ptr = list; ptr != nullptr; ptr = ptr->next)
    {
        cout << ptr->data << " ";
    }
}
