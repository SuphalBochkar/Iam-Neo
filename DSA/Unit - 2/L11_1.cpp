#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
    node(int val) : data(val), next(nullptr) {}
};

int countNodes(node *list);

int main()
{
    node *list = nullptr;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        node *temp = new node(a);
        temp->next = list;
        list = temp;
    }

    int length = countNodes(list);
    cout << length << endl;
}

int countNodes(node *list)
{
    int c = 0;
    node *ptr = list;
    while (ptr)
    {
        c++;
        ptr = ptr->next;
    }
    return c;
}