#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int a) : data(a), left(nullptr), right(nullptr) {}
};

struct Node *insertLevelOrder(int arr[], struct Node *root, int i, int n)
{
    if (i < n)
    {
        Node *temp = new Node(arr[i]);
        root = temp;
        root->left = insertLevelOrder(arr, root->left, 2 * i + 1, n);
        root->right = insertLevelOrder(arr, root->right, 2 * i + 2, n);
    }
    return root;
}

void postorderTraversal(struct Node *root)
{
    if (root == nullptr)
        return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

int main()
{
    int n, i;
    cin >> n;
    int *arr = (int *)malloc(sizeof(int) * n);

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    struct Node *root = insertLevelOrder(arr, nullptr, 0, n);
    postorderTraversal(root);

    free(arr);
    return 0;
}
