#include <iostream>
#include <cstdlib>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *newNode(int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct Node *insertLevelOrder(int arr[], struct Node *root, int i, int n)
{
    if (i < n)
    {
        struct Node *temp = newNode(arr[i]);
        root = temp;

        // Insert left child
        root->left = insertLevelOrder(arr, root->left, 2 * i + 1, n);

        // Insert right child
        root->right = insertLevelOrder(arr, root->right, 2 * i + 2, n);
    }
    return root;
}

void postorderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->data << " ";
    }
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

    struct Node *root = insertLevelOrder(arr, NULL, 0, n);
    postorderTraversal(root);

    free(arr);
    return 0;
}
