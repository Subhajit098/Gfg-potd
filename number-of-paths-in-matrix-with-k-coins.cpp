#include <bits/stdc++.h>
using namespace std;

// Memoisation code
long long helper(int row, int col, int target, vector<vector<int>> &arr, int n, vector<vector<vector<int>>> &dp)
{
    if (row < 0 || col < 0)
        return 0;

    if (target < 0)
        return 0;

    if (row == 0 && col == 0)
    {
        if (target == arr[row][col])
            return 1;
        return 0;
    }

    if (dp[row][col][target] != -1)
        return dp[row][col][target];

    long long top = helper(row - 1, col, target - arr[row][col], arr, n, dp);
    long long left = helper(row, col - 1, target - arr[row][col], arr, n, dp);

    return dp[row][col][target] = top + left;
}

long long numberOfPath(int n, int k, vector<vector<int>> &arr)
{
    // Code Here
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(k + 1, -1)));
    return helper(n - 1, n - 1, k, arr, n, dp);
}


// Tabulation Code
