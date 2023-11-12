#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int value;
    TreeNode *left;
    TreeNode *right;
};

TreeNode *createNode(int value)
{
    TreeNode *newNode = new TreeNode;
    newNode->value = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

void inOrderTraversal(TreeNode *root)
{
    if (root)
    {
        inOrderTraversal(root->left);
        cout << root->value << " ";
        inOrderTraversal(root->right);
    }
}

int main()
{
    int n;
    cin >> n;

    int val;
    TreeNode *root = nullptr;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        if (i == 0)
        {
            root = createNode(val);
        }
        else
        {
            TreeNode *current = root;
            while (true)
            {
                if (val < current->value)
                {
                    if (current->left == nullptr)
                    {
                        current->left = createNode(val);
                        break;
                    }
                    current = current->left;
                }
                else
                {
                    if (current->right == nullptr)
                    {
                        current->right = createNode(val);
                        break;
                    }
                    current = current->right;
                }
            }
        }
    }

    cout << "In-order traversal: ";
    inOrderTraversal(root);
    cout << endl;

    return 0;
}
