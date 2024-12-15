#include <bits/stdc++.h>
using namespace std;

long long findNth(long long n)
{
    // code here.
    long long ans = 0, base = 9, cnt = 1;
    while (n)
    {
        int rem = n % base;
        ans += rem * cnt;
        n = n / base;
        cnt *= 10;
    }
    return ans;
}

int main()
{

    return 0;
}