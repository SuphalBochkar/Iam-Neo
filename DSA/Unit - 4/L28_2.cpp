#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
    node(int a) : data(a), left(nullptr), right(nullptr) {}
};

struct node *root = nullptr;

void append(node *&root, int d)
{
    if (root == nullptr)
    {
        root = new node(d);
    }
    else if (d < root->data)
        append(root->left, d);
    else
        append(root->right, d);
}

void leafsum(node *root, int *sum)
{
    if (!root)
        return;
    if (!root->left && !root->right)
        *sum += root->data;
    leafsum(root->left, sum);
    leafsum(root->right, sum);
}

int main()
{
    int d;
    do
    {
        cin >> d;
        if (d > 0)
            append(root, d);
    } while (d != -1);
    int sum = 0;
    leafsum(root, &sum);
    cout << "Sum of all leaf nodes are " << sum;
    return 0;
}