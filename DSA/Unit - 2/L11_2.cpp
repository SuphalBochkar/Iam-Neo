#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
    node(int val) : data(val), next(nullptr) {}
};

void addNode(node *&list, int val);
node *mergeLL(node *list1, node *list2);
void display(node *list);

int main()
{
    int n, m;
    cin >> n;

    node *list1 = nullptr;
    node *list2 = nullptr;
    node *merged = nullptr;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        addNode(list1, a);
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        addNode(list2, a);
    }

    cout << "List 1: ";
    display(list1);

    cout << "\nList 2: ";
    display(list2);

    merged = mergeLL(list1, list2);
    cout << "Merged List: ";
    display(merged);
}

node *mergeLL(node *list1, node *list2)
{
    node *mergedHead = nullptr;
    node *current1 = list1;
    node *current2 = list2;
    node *tail = nullptr;

    while (current1 != nullptr || current2 != nullptr)
    {
        if (current1 != nullptr)
        {
            if (mergedHead == nullptr)
            {
                mergedHead = current1;
                tail = current1;
            }
            else
            {
                tail->next = current1;
                tail = current1;
            }
            current1 = current1->next;
        }

        if (current2 != nullptr)
        {
            if (mergedHead == nullptr)
            {
                mergedHead = current2;
                tail = current2;
            }
            else
            {
                tail->next = current2;
                tail = current2;
            }
            current2 = current2->next;
        }
    }

    return mergedHead;
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

void display(node *n)
{

    for (node *ptr = n; ptr != nullptr; ptr = ptr->next)
    {
        cout << ptr->data << " ";
    }
}
