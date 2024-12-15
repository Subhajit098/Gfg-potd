#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dirs = {
    {0, -1},
    {1, 0},
    {0, 1},
    {-1, 0}};

string dirs_ch = "LDRU";

void helper(int r, int c, int n, vector<string> &ans,
            string &ds, vector<vector<int>> &arr)
{

    if (r == n - 1 && c == n - 1)
    {
        ans.push_back(ds);
        return;
    }

    int value = arr[r][c];
    if (value != 0)
    {
        arr[r][c] = -1;

        for (int i = 0; i <= 3; i++)
        {
            int new_r = r + dirs[i][0], new_c = c + dirs[i][1];
            if (new_r >= 0 && new_r < n && new_c >= 0 && new_c < n && arr[new_r][new_c] != -1 && arr[new_r][new_c] != 0)
            {
                ds.push_back(dirs_ch[i]);
                helper(new_r, new_c, n, ans, ds, arr);
                ds.pop_back();
            }
        }

        arr[r][c] = value;
    }
}

vector<string> findPath(vector<vector<int>> &arr)
{
    // Your code goes here
    int n = arr.size();
    string ds = "";
    vector<string> ans;
    helper(0, 0, n, ans, ds, arr);

    if (ans.size() == 0)
    {
        ans.push_back("-1");
        return ans;
    }

    return ans;
}

int main()
{

    return 0;
}