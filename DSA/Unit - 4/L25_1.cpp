#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode *buildTree(vector<int> &arr, int &index)
{
    if (index >= arr.size() || arr[index] == -1)
    {
        return nullptr;
    }
    TreeNode *root = new TreeNode(arr[index]);
    root->left = buildTree(arr, ++index);
    root->right = buildTree(arr, ++index);
    return root;
}

void inorder(TreeNode *root, vector<int> &sorted)
{
    if (!root)
    {
        return;
    }
    inorder(root->left, sorted);
    sorted.push_back(root->val);
    inorder(root->right, sorted);
}

int minSwapsToBST(TreeNode *root)
{
    vector<int> sorted;
    inorder(root, sorted);

    vector<pair<int, int>> indexed(sorted.size());
    for (int i = 0; i < sorted.size(); i++)
    {
        indexed[i] = {sorted[i], i};
    }

    sort(indexed.begin(), indexed.end());
    vector<bool> visited(sorted.size(), false);

    int swaps = 0;
    for (int i = 0; i < sorted.size(); i++)
    {
        if (visited[i] || indexed[i].second == i)
        {
            continue;
        }
        int cycle_size = 0;
        int j = i;
        while (!visited[j])
        {
            visited[j] = true;
            j = indexed[j].second;
            cycle_size++;
        }
        if (cycle_size > 0)
        {
            swaps += cycle_size - 1;
        }
    }
    return swaps;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int index = 0;
    TreeNode *root = buildTree(arr, index);
    int swaps = minSwapsToBST(root);
    cout << swaps << endl;
    return 0;
}
