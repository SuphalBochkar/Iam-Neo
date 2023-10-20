
// You are using GCC
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left = NULL;
    struct Node *right = NULL;
} *root = NULL, *temp;

// Function to build the tree
void create(Node *&root, int input)
{
    if (root == nullptr)
    {
        root = new Node;
        root->data = input;
        return;
    }
    if (input < root->data)
        create(root->left, input);
    else if (input > root->data)
        create(root->right, input);
}

// Function to perform the preorder traversal
void preorder(struct Node *temp)
{
    if (temp == nullptr)
        return;
    cout << temp->data << " ";
    preorder(temp->left);
    preorder(temp->right);
}

int main()
{
    int input;
    while (1)
    {
        cin >> input;
        if (input < 1)
            break;
        create(root, input);
    }
    preorder(root);
    return 0;
}