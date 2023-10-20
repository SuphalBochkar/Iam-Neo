// You are using GCC
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    // Node(int a) : dWWata(a), left(nullptr), right(nullptr) {}
};

struct Node *insertNode(struct Node *root, int data)
{
    if (root == nullptr)
        root = new Node(data);

    if (data < root->data)
        root->left = insertNode(root->left, data);
    else if (data > root->data)
        root->right = insertNode(root->right, data);

    return root;
}

void inorderTraversal(struct Node *root)
{
    if (root == nullptr)
        return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = new Node;
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Function to build the tree
struct Node *insertNode(struct Node *root, int data)
{
    if (root == nullptr)
    {
        return createNode(data);
    }
    else if (data < root->data)
    {
        root->left = insertNode(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insertNode(root->right, data);
    }
    return root;
}

// Function to perform the inorder traversal
void inorderTraversal(struct Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main()
{
    struct Node *root = NULL;
    int n, data;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        root = insertNode(root, data);
    }
    inorderTraversal(root);
    return 0;
}
