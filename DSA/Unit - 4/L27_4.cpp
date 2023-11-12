#include <iostream>
#include <cstdlib>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int a) : data(a), left(nullptr), right(nullptr) {}
};

struct node *root;
struct node *append(struct node *root, int d)
{
    if (root == nullptr)
    {
        return new node(d);
    }
    else
    {
        if (d <= root->data)
            root->left = append(root->left, d);
        else
            root->right = append(root->right, d);
        return root;
    }
}

void postorder(struct node *root)
{
    if (root == nullptr)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    int d;
    do
    {
        cin >> d;
        if (d > 0)
            root = append(root, d);
    } while (d != -1);

    cout << "Post order Traversal:" << endl;
    postorder(root);

    return 0;
}
