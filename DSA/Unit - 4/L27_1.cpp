#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int d) : data(d), left(nullptr), right(nullptr) {}
};

Node *insert(Node *root, int data)
{
    if (root == nullptr)
    {
        return new Node(data);
    }
    else
    {
        Node *cur;
        if (data <= root->data)
        {
            cur = insert(root->left, data);
            root->left = cur;
        }
        else
        {
            cur = insert(root->right, data);
            root->right = cur;
        }
        return root;
    }
}

void postOrder(Node *root)
{
    if (root == nullptr)
        return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int sumOfNodes(Node *root)
{
    if (root == nullptr)
        return 0;

    return root->data + sumOfNodes(root->left) + sumOfNodes(root->right);
}

int main()
{
    Node *root = nullptr;

    int n;
    int data;

    cin >> n;

    while (n-- > 0)
    {
        cin >> data;
        root = insert(root, data);
    }

    cout << "Post-order traversal: ";
    postOrder(root);
    cout << endl;

    int totalSum = sumOfNodes(root);
    cout << "Sum of all nodes: " << totalSum << endl;

    return 0;
}


