#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};


// Optimized with O(N) space and time complexity. Alternative way of doing with recursion is using a map
// And level order traversal for iterative way
void helper(Node *root, int level, vector<int> &ans)
{
    if (!root)
        return;

    if (level == ans.size())
        ans.push_back(root->data);

    helper(root->left, level + 1, ans);

    helper(root->right, level + 1, ans);
}

vector<int> leftView(Node *root)
{
    // Your code here
    vector<int> ans;
    helper(root, 0, ans);
    return ans;
}

int main()
{

    return 0;
}