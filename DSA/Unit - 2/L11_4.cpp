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

int main()
{
    node *even = nullptr;
    node *odd = nullptr;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if (a % 2 == 0)
        {
            addNode(even, a);
        }
        else
        {
            addNode(odd, a);
        }
    }

    cout << "Even List: ";
    display(even);

    cout << "\nOdd List: ";
    display(odd);
}

void addNode(node *&list, int val)
{
    node *n = new node(val);
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

void display(node *list)
{
    for (node *ptr = list; ptr != nullptr; ptr = ptr->next)
    {
        cout << ptr->data << " ";
    }
}