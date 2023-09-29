#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void addNode(node *&list, int a);
int binary(node *list);
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

    display(list);

    int a = binary(list);
    cout << "Decimal Value: " << a << endl;

    return 0;
}

void addNode(node *&list, int a)
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

int binary(node *list)
{
    if (!list)
    {
        return 0;
    }
    int ans = 0;
    node *ptr = list;
    while (ptr)
    {
        ans = ans * 2 + ptr->data;
        ptr = ptr->next;
    }
    return ans;
}

void display(node *list)
{
    cout << "Linked List: ";
    if (list == nullptr)
    {
        cout << "Empty linked list" << endl;
    }
    else
    {
        while (list)
        {
            cout << list->data << " ";
            list = list->next;
        }
        cout << endl;
    }
}
