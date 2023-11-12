#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
    node(int a) : data(a), left(nullptr), right(nullptr) {}
};

void preOrder(struct node *root)
{
    if (root == nullptr)
    {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void insert(struct node *&root, int data)
{
    if (root == nullptr)
    {
        root = new node(data);
        return;
    }

    if (data < root->data)
        insert(root->left, data);
    else
        insert(root->right, data);
}

int main()
{
    node *root = nullptr;

    int t;
    int data;

    cin >> t;

    while (t-- > 0)
    {
        cin >> data;
        insert(root, data);
    }

    preOrder(root);
    return 0;
}