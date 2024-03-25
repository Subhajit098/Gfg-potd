#include <bits/stdc++.h>
using namespace std;

void helper(int i, int count_1, int count_0, vector<string> &ans, string ds, int n)
{
    if (i == n)
    {
        ans.push_back(ds);
        return;
    }

    ds.push_back('1');
    helper(i + 1, count_1 + 1, count_0, ans, ds, n);
    ds.pop_back();

    if (count_1 >= count_0 + 1)
    {
        ds.push_back('0');
        helper(i + 1, count_1, count_0 + 1, ans, ds, n);
    }
}

vector<string> NBitBinary(int n)
{
    // Your code goes here
    vector<string> ans;
    string ds = "1";
    helper(1, 1, 0, ans, ds, n);
    return ans;
}