#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void addNode(node *&list, int val);
void shift(node *&list, int sh);
void display(node *list);
int length(node *head);

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

    cout << "Original List: ";
    display(list);

    int b;
    cin >> b;
    shift(list, b);

    cout << "\nRotated List: ";
    display(list);
}

void addNode(node *&list, int val)
{
    node *n = new node;
    n->data = val;
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
        n->next = ptr->next;
        ptr->next = n;
    }
}
void display(node *list)
{
    for (node *ptr = list; ptr != nullptr; ptr = ptr->next)
    {
        cout << ptr->data << " ";
    }
}

int length(node *head)
{
    int len = 0;
    for (node *current = head; current != nullptr; current = current->next)
    {
        len++;
    }
    return len;
}