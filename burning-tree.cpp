#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// using bfs traversal

int helper(Node *targetNode, unordered_map<Node *, Node *> &childToParent)
{
    int maxi = 0;
    queue<Node *> q;
    q.push(targetNode);
    unordered_map<Node *, int> vis;
    vis[targetNode] = 1;

    while (!q.empty())
    {
        int size = q.size();
        bool flag = 0;
        for (int i = 0; i < size; i++)
        {
            Node *old = q.front();
            q.pop();

            if (old->left && !vis[old->left])
            {
                flag = 1;
                vis[old->left] = 1;
                q.push(old->left);
            }

            if (old->right && !vis[old->right])
            {
                flag = 1;
                vis[old->right] = 1;
                q.push(old->right);
            }

            if (childToParent[old] && !vis[childToParent[old]])
            {
                flag = 1;
                vis[childToParent[old]] = 1;
                q.push(childToParent[old]);
            }
        }
        if (flag)
            maxi++;
    }

    return maxi;
}

Node *levelOT(Node *root, unordered_map<Node *, Node *> &childToParent,
              int target)
{
    Node *result = NULL;
    queue<Node *> q;
    Node *node = root;
    q.push(node);

    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            Node *old = q.front();
            if (old->data == target)
                result = old;
            q.pop();

            if (old->left)
            {
                childToParent[old->left] = old;
                q.push(old->left);
            }

            if (old->right)
            {
                childToParent[old->right] = old;
                q.push(old->right);
            }
        }
    }

    return result;
}

int minTime(Node *root, int target)
{
    // Your code goes here
    unordered_map<Node *, Node *> childToParent;
    Node *targetNode = levelOT(root, childToParent, target);
    int minTime = helper(targetNode, childToParent);

    return minTime;
}

int main()
{

    return 0;
}