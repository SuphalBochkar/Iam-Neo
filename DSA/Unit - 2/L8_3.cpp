#include <bits/stdc++.h>
using namespace std;

struct node
{
    string data;
    struct node *next;
};

void addNode(node *&list, string key);
void insertNode(node *&list, string key, int pos);
void print(node *list);

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    node *list = nullptr;

    for (int i = 0; i < n; i++)
    {
        string a;
        getline(cin, a);
        addNode(list, a);
    }
    cout << "Current Linked List:" << endl;

    print(list);
    cout << endl;

    string key;
    int pos;
    cin >> key >> pos;

    insertNode(list, key, pos);

    cout << "Updated Linked List:" << endl;
    print(list);
    return 0;
}

