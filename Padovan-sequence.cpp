#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

int padovanSequence(int n)
{
    // code here.
    int prev2 = 1, prev1 = 1, prev = 1;
    if (n == 0 || n == 1 || n == 2)
        return prev;

    for (int i = 1; i <= n - 2; i++)
    {
        int curr = (prev2 + prev1) % mod;
        prev2 = prev1;
        prev1 = prev;
        prev = curr;
    }
    return prev;
}