#include <iostream>
#include <unordered_set>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    int testCases;
    cin >> testCases;

    int n;
    cin >> n;

    Node *head1 = NULL;
    Node *head2 = NULL;

    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        insert(&head1, data);
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int data;
        cin >> data;
        insert(&head2, data);
    }

    intersection(head1, head2);

    return 0;
}
