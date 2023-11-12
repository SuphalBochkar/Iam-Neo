#include <bits/stdc++.h>
using namespace std;

const int MAX_NODES = 100;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int ans[MAX_NODES];
int idx = 0;

void postorder(TreeNode *root)
{
    if (root)
    {
        postorder(root->left);
        postorder(root->right);
        ans[idx++] = root->val;
    }
}

void fillArray(TreeNode *root)
{
    postorder(root);
}

int *postorderTraversal(TreeNode *root)
{
    fillArray(root);
    return ans;
}

TreeNode *createTree(int arr[], int i, int n)
{
    if (i >= n || arr[i] == -1)
        return nullptr;

    TreeNode *root = new TreeNode(arr[i]);
    root->left = createTree(arr, 2 * i + 1, n);
    root->right = createTree(arr, 2 * i + 2, n);
    return root;
}

int main()
{
    int n;
    cin >> n;

    int arr[MAX_NODES];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    TreeNode *root = createTree(arr, 0, n);
    int *postorderResult = postorderTraversal(root);
    for (int i = 0; i < n; ++i)
        cout << postorderResult[i] << " ";

    return 0;
}
