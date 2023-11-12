#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int a) : data(a), left(nullptr), right(nullptr) {}
};

void append(Node *&root, int data)
{
    if (root == nullptr)
    {
        root = new Node(data);
        return;
    }

    if (data < root->data)
        append(root->left, data);
    else
        append(root->right, data);
}

int KSmallestUsingMorris(Node *root, int k)
{
    if (root == nullptr)
        return -1;

    int count = 0;
    int ans = -1;

    Node *cur = root;
    while (cur != nullptr)
    {
        if (cur->left == nullptr)
        {
            count++;
            if (count == k)
                ans = cur->data;
            cur = cur->right;
        }
        else
        {
            Node *pre = cur->left;
            while (pre->right != nullptr && pre->right != cur)
                pre = pre->right;

            if (pre->right == nullptr)
            {
                pre->right = cur;
                cur = cur->left;
            }
            else
            {
                pre->right = nullptr;
                count++;
                if (count == k)
                    ans = cur->data;

                cur = cur->right;
            }
        }
    }

    return ans;
}

int main()
{
    Node *root = nullptr;
    int data, k;
    do
    {
        cin >> data;
        if (data > 0)
            append(root, data);
    } while (data > 0);
    cin >> k;
    cout << "Smallest kth value " << KSmallestUsingMorris(root, k);
    return 0;
}