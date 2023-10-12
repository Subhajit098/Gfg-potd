#include <bits/stdc++.h>
using namespace std;

string solve(Node *root, unordered_map<string, int> &mp)
{
    if (!root)
        return "!";

    string s = "";

    if (!root->left & !root->right)
    {
        s = to_string(root->data);
        return s;
    }

    s = s + to_string(root->data);
    s = s + solve(root->left, mp);
    s = s + solve(root->right, mp);

    mp[s]++;

    return s;
}

// public:
int dupSub(Node *root)
{
    // code here
    // int count=0;
    unordered_map<string, int> mp;
    solve(root, mp);
    for (auto it : mp)
    {
        if (it.second >= 2)
            return 1;
    }
    return 0;
}