#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int a) : data(a), left(nullptr), right(nullptr) {}
};

struct Node *newNode(int data)
{
    return new Node(data);
}

void NthInorder(struct Node *node, int &n)
{
    if (node == nullptr)
        return;

    NthInorder(node->left, n);
    if (--n == 0)
    {
        cout << node->data;
        return;
    }

    NthInorder(node->right, n);
}

int main()
{
    struct Node *root = newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);
    root->left->left = newNode(40);
    root->right->right = newNode(50);

    int n;
    cin >> n;

    NthInorder(root, n);
    return 0;
}