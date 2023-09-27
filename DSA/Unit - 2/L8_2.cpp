#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void addNode(node *&list, int key);
void insert_mid(node *&list, int pos, int key);
void print(node *list);

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

    int pos, key;
    cin >> pos >> key;

    insert_mid(list, pos, key);
    print(list);
    return 0;
}

