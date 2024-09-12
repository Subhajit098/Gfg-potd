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

void mirror(Node *node)
{
    // code here
    if (!node)
        return;

    Node *left_pt = node->left;
    node->left = node->right;
    node->right = left_pt;

    mirror(node->left);
    mirror(node->right);
}

int main()
{

    return 0;
}