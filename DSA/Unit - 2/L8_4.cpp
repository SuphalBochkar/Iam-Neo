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
