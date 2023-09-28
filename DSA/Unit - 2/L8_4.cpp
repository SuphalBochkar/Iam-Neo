#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void addFirst(node *&list, int key);
void display(node *list);

int main()
{
    int n;
    cin >> n;

    node *list = nullptr;
    for (int i = 0; i < n; i++)
    {
        int key;
        cin >> key;
        addFirst(list, key);
    }

    int a;
    cin >> a;

    cout << "Created Linked list: ";
    display(list);
    cout << endl;

    addFirst(list, a);
    cout << "Final List: ";
    display(list);

    return 0;
}

void addFirst(node *&list, int key)
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
        n->next = list;
        list = n;
    }
}

void display(node *list)
{
    for (node *ptr = list; ptr != nullptr; ptr = ptr->next)
    {
        cout << ptr->data << " ";
    }
}
