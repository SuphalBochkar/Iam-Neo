#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
    node(int val) : data(val), next(nullptr) {}
};

void addNode(node *&list, int val);
void removeNodes(node *&list);
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

    cout << "Original Linked List: ";
    display(list);

    removeNodes(list);

    cout << "\nFinal Linked List: ";
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

void removeNodes(node *&list)
{
    if (!list || !list->next)
    {
        return;
    }

    node *current = list;
    node *prev = nullptr;
    int position = 1;

    while (current)
    {
        if (position % 2 == 0)
        {
            node *temp = current;
            prev->next = current->next;
            current = current->next;
        }
        else
        {
            prev = current;
            current = current->next;
        }
        position++;
    }
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
