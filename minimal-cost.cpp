#include <bits/stdc++.h>
using namespace std;

// Memoized + recursive code
int helper(int i, int k, vector<int> &arr, vector<int> &dp)
{
    if (i == arr.size() - 1)
        return 0;

    if (i >= arr.size())
        return 1e9;

    if (dp[i] != -1)
        return dp[i];

    int mini = INT_MAX;
    for (int j = i + 1; j <= i + k; j++)
    {
        int value = helper(j, k, arr, dp);
        if (j < arr.size())
            value += abs(arr[j] - arr[i]);
        mini = min(mini, value);
    }

    return dp[i] = mini;
}

int minimizeCost(int k, vector<int> &arr)
{
    // Code here
    int n = arr.size();
    vector<int> dp(n, -1);
    return helper(0, k, arr, dp);
}

// Tabulation code
int minimizeCost(int k, vector<int> &arr)
{
    // Code here
    int n = arr.size();
    vector<int> dp(n, INT_MAX);

    dp[n - 1] = 0;

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = i + 1; j < n && j <= i + k; j++)
        {
            dp[i] = min(dp[i], abs(arr[j] - arr[i]) + dp[j]);
        }
    }

    return dp[0];
}

int main()
{

    return 0;
}