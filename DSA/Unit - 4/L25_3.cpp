#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

int nodeCount(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    return 1 + nodeCount(root->left) + nodeCount(root->right);
}

Node *createNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

Node *buildBinaryTree()
{
    int data;
    cin >> data;

    if (data == -1)
    {
        return nullptr;
    }

    Node *root = createNode(data);

    root->left = buildBinaryTree();
    root->right = buildBinaryTree();

    return root;
}

bool hasDuplicateValues(Node *root)
{
    unordered_set<int> values;
    stack<Node *> st;
    Node *current = root;
    while (current != nullptr || !st.empty())
    {
        while (current != nullptr)
        {
            st.push(current);
            current = current->left;
        }
        current = st.top();
        st.pop();

        if (values.find(current->data) != values.end())
            return true;

        values.insert(current->data);

        current = current->right;
    }

    return false;
}

int main()
{
    Node *root = nullptr;

    root = buildBinaryTree();

    if (hasDuplicateValues(root))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}