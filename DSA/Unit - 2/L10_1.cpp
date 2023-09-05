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
