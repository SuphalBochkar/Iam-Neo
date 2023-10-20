#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};

void inorder(TreeNode *root, vector<int> &values)
{
    if (root == nullptr)
        return;
    inorder(root->left, values);
    values.push_back(root->val);
    inorder(root->right, values);
}

int kthLargest(TreeNode *root, int k)
{
    vector<int> values;
    inorder(root, values);
    int n = values.size();
    if (k <= 0 || k > n)
        return -1;
    return values[n - k];
}

TreeNode *buildBST()
{
    int val;
    TreeNode *root = nullptr;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        if (root == nullptr)
            root = new TreeNode(val);
        else
        {
            TreeNode *current = root;
            while (true)
            {
                if (val < current->val)
                {
                    if (current->left == nullptr)
                    {
                        current->left = new TreeNode(val);
                        break;
                    }
                    current = current->left;
                }
                else
                {
                    if (current->right == nullptr)
                    {
                        current->right = new TreeNode(val);
                        break;
                    }
                    current = current->right;
                }
            }
        }
    }

    return root;
}

int main()
{

    TreeNode *root = buildBST();

    int k;
    cin >> k;

    int kth_largest = kthLargest(root, k);
    cout << kth_largest;

    delete root;

    return 0;
}