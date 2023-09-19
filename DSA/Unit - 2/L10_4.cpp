#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
    node(int val) : data(val), next(nullptr) {}
};

void addNode(node *&list, int val);
void removeNodes(node *&list, int pos);
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

    int a;
    cin >> a;

    removeNodes(list, a);
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

void removeNodes(node *&head, int pos)
{
    if (pos == 1)
    {
        node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    node *prev = nullptr;
    node *current = head;
    int count = 1;
    while (current != nullptr && count < pos)
    {
        prev = current;
        current = current->next;
        count++;
    }

    if (current == nullptr)
    {
        return;
    }

    prev->next = current->next;
    delete current;
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
