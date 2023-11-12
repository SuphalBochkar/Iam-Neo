#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int a) : data(a), left(nullptr), right(nullptr) {}
};

Node *insertNode(Node *root, int data)
{
    if (root == nullptr)
        root = new Node(data);
    if (data < root->data)
        root->left = insertNode(root->left, data);
    else if (data > root->data)
        root->right = insertNode(root->right, data);

    return root;
}

void preorderTraversal(Node *root)
{
    if (root == nullptr)
        return;

    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main()
{
    Node *root = nullptr;
    int n, data;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> data;
        root = insertNode(root, data);
    }

    preorderTraversal(root);
    return 0;
}