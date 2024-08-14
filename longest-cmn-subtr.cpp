#include <bits/stdc++.h>
using namespace std;

// Method 1 using memoization
int solve(int i, int j, string &s1, string &s2, vector<vector<int>> &dp, int &ans)
{
    if (i >= s1.size() || j >= s2.size())
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int take = 0;
    if (s1[i] == s2[j])
    {
        take = 1 + solve(i + 1, j + 1, s1, s2, dp);
        ans = max(ans, take);
    }
    int exc1 = solve(i + 1, j, s1, s2, dp);
    int exc2 = solve(i, j + 1, s1, s2, dp);
    return dp[i][j] = take;
}
int longestCommonSubstr(string str1, string str2)
{
    int n = str1.size();
    int m = str2.size();
    int ans = 0;
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    solve(0, 0, str1, str2, dp, ans);
    return ans;
}

// Method 2 using tabulation
int longestCommonSubstr(string str1, string str2)
{
    // your code here
    int n = str1.size(), m = str2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                ans = max(ans, dp[i][j]);
            }
        }
    }

    return ans;
}

int main()
{

    return 0;
}