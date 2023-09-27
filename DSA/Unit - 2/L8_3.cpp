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

void addNode(node *&list, string key)
{
    node *n = new node;
    n->data = key;
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

void insertNode(node *&list, string key, int pos)
{
    node *n = new node;
    n->data = key;
    n->next = nullptr;

    if (pos == 1)
    {
        n->next = list;
        list = n;
        return;
    }

    node *ptr = list;
    int c = 1;
    while (c != pos - 1 && ptr != nullptr)
    {
        c++;
        ptr = ptr->next;
    }

    if (ptr != nullptr)
    {
        n->next = ptr->next;
        ptr->next = n;
    }
}

void print(node *list)
{
    for (node *ptr = list; ptr != nullptr; ptr = ptr->next)
    {
        cout << ptr->data << " ";
    }
}

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    string name;
    Node *next;

    Node(const string &n) : name(n), next(nullptr) {}
};

class StudentRoster
{
public:
    Node *head;

    StudentRoster() : head(nullptr) {}

    void insertNode(const string &name, int position)
    {
        Node *newNode = new Node(name);
        if (position == 1 || head == nullptr)
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {
            Node *current = head;
            int currentPosition = 1;

            while (currentPosition < position - 1 && current->next != nullptr)
            {
                current = current->next;
                currentPosition++;
            }

            newNode->next = current->next;
            current->next = newNode;
        }
    }

    void printList()
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->name << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    StudentRoster roster;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        roster.insertNode(name, i + 1);
    }

    cout << "Current Linked List:" << endl;
    roster.printList();

    string newName;
    int position;
    cin >> newName >> position;
    roster.insertNode(newName, position);

    cout << "Updated Linked List:" << endl;
    roster.printList();

    return 0;
}
