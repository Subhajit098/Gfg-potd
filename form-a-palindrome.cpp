#include <bits/stdc++.h>
using namespace std;

int LCS(int i, int j, string &s1, string &s2, vector<vector<int>> &dp)
{
    if (i < 0 || j < 0)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    if (s1[i] == s2[j])
        return dp[i][j] = 1 + LCS(i - 1, j - 1, s1, s2, dp);

    return dp[i][j] = max(LCS(i, j - 1, s1, s2, dp), LCS(i - 1, j, s1, s2, dp));
}

int countMin(string str)
{
    // complete the function here
    string s = str;
    int n = s.size();
    vector<vector<int>> dp(n, vector<int>(n, -1));
    reverse(str.begin(), str.end());
    int common_pal_length = LCS(n - 1, n - 1, s, str, dp);
    return n - common_pal_length;
}

int main()
{

    return 0;
}