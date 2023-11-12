#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root;
void append(int d) // 1
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    struct node *temp = root;
    n->data = d;
    n->left = NULL;
    n->right = NULL;
    if (root == NULL)
    {
        root = n;
    }
    else
    {
        while (true)
        {
            if (d < temp->data) // 4
            {
                if (temp->left != NULL)
                {
                    temp = temp->left;
                }
                else
                {
                    temp->left = n;
                    break;
                }
            }
            else
            {
                if (temp->right != NULL)
                {
                    temp = temp->right;
                }
                else
                {
                    temp->right = n;
                    break;
                }
            }
        }
    }
}
void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}
int main()
{
    int d;
    do
    {
        scanf("%d", &d);
        if (d > 0)
            append(d);
    } while (d != -1);
    printf("Post order Traversal:\n");
    postorder(root);
    return 0;
}