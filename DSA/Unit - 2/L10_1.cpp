#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
    node(int val) : data(val), next(nullptr) {}
};

void addNode(node *&list, int val);
void display(node *list);
void removeNodes(node *&list, int x);

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

    int k;
    cin >> k;

    cout << "Original Linked List: ";
    display(list);

    removeNodes(list, k);

    cout << "\nModified Linked List: ";
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

void removeNodes(node *&list, int x)
{
    node dummy(0);
    dummy.next = list;
    node *prev = &dummy;
    node *current = list;
    while (current)
    {
        if (current->data > x)
        {
            prev->next = current->next;
            current = prev->next;
        }
        else
        {
            prev = current;
            current = current->next;
        }
    }
    list = dummy.next;
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
