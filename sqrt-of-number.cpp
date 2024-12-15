#include <bits/stdc++.h>
using namespace std;

long long int floorSqrt(long long int n)
{
    // Your code goes here
    if (n == 0)
        return n;

    long long l = 1, r = n;
    long long ans = -1;
    while (l <= r)
    {
        long long mid = l + (r - l) / 2;

        if (mid * mid == n)
        {
            ans = mid;
            break;
        }

        else if (mid * mid > n)
        {
            r = mid - 1;
        }

        else
        {
            ans = mid;
            l = mid + 1;
        }
    }

    return ans;
}

int main()
{

    return 0;
}