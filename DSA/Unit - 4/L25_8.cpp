#include <stdio.h>
#include <stdlib.h>
#define MAX_NODES 100
struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
int ans[MAX_NODES];
int idx = 0;
struct TreeNode *createNode(int x)
{
    struct TreeNode *newNode = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    newNode->val = x;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void postorder(struct TreeNode *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    ans[idx++] = root->val;
}
void fillArray(struct TreeNode *root)
{
    postorder(root);
}
int *postorderTraversal(struct TreeNode *root)
{
    fillArray(root);
    return ans;
}
struct TreeNode *createTree(int arr[], int i, int n)
{
    struct TreeNode *newNode = NULL;
    if (i < n)
    {
        newNode = createNode(arr[i]);
        newNode->left = createTree(arr, 2 * i + 1, n);
        newNode->right = createTree(arr, 2 * i + 2, n);
    }
    return newNode;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[MAX_NODES];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    struct TreeNode *root = createTree(arr, 0, n);
    int *postorderResult = postorderTraversal(root);
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", postorderResult[i]);
    }
    return 0;
}