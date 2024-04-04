#include <bits/stdc++.h>
using namespace std;

long long sumSubstrings(string s)
{
    // your code here
    int n = s.size();
    vector<long long> dp(n, 0);
    int mod = 1e9 + 7;
    dp[0] = s[0] - '0';
    long long sum = dp[0];
    for (int i = 1; i < s.size(); i++)
    {
        dp[i] = ((dp[i - 1] * 10) + ((i + 1) * (s[i] - '0')) % mod) % mod;
        sum = (sum + dp[i]) % mod;
    }
    return sum;
}